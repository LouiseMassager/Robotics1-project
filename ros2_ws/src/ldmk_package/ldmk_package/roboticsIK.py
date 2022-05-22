#!/usr/bin/python3
from math import *

import sys
import rclpy
# import the Node module from ROS2 python library
from rclpy.node import Node

from geometry_msgs.msg import Twist
# import Quality of Service library, to set the correct profile and reliability in order to read sensor data.
from rclpy.qos import ReliabilityPolicy, QoSProfile

from rclpy.qos import qos_profile_sensor_data
from hrim_actuator_rotaryservo_msgs.msg import GoalRotaryServo
from time import sleep

# data given
l0 = 0.09122
l1 = 0.1637
l2 = 0.19998
l3 = 0.1493
l4 = 0.1607
l5 = 0.1468
l6 = 0.2449

# used here
a2 = l2
a3 = l3
d1 = l1
d6 = l4+l5+l6


# initialization
#Ox_prev = 0
#Oy_prev = 0
#Oz_prev = l1 + l2 + l3 + l4 + l5 + l6
#phi_prev = 0
#theta_prev = 0
#psi_prev = 0


class SimpleSubscriber(Node):

    def __init__(self):
        # Here we have the class constructor
        # call super() in the constructor in order to initialize the Node object
        # the parameter we pass is the node name
        super().__init__('simple_subscriber')
        # create the subscriber object
        # in this case the subscriptor will be subsribed on /scan topic with a queue size of 10 messages.
        # use the LaserScan module for /scan topic
        # send the received info to the listener_callback method.
        self.subscriber = self.create_subscription(
            Twist,
            '/cmd_ik',
            self.listener_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))  # is the most used to read LaserScan data and some sensor data too.
        # prevent unused variable warning

        # initialization
        self.Ox = 0
        self.Oy = 0
        self.Oz = 0.51298
        self.phi = 0
        self.theta = 0
        self.psi = 0

        self.subscriber
        # define the variable to save the received info
        #self.laser_forward = 0

        # angles
        self.pub = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000001/goal_axis2', qos_profile=qos_profile_sensor_data)
        self.pub2 = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000001/goal_axis1', qos_profile=qos_profile_sensor_data)
        self.pub3 = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000002/goal_axis1', qos_profile=qos_profile_sensor_data)
        self.pub4 = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000002/goal_axis2', qos_profile=qos_profile_sensor_data)
        self.pub5 = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000003/goal_axis1', qos_profile=qos_profile_sensor_data)
        self.pub6 = self.create_publisher(
            GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000003/goal_axis2', qos_profile=qos_profile_sensor_data)

    def listener_callback(self, msg):
        # print the log info in the terminal
        self.get_logger().info('I received steps: "%s"' %str(msg))
        self.Ox = self.Ox + msg.linear.x
        self.Oy = self.Oy + msg.linear.y
        self.Oz = self.Oz + msg.linear.z
        self.psi = self.psi + msg.angular.x
        self.theta = self.theta + msg.angular.y
        self.phi = self.phi + msg.angular.z
        res = ik(self.Ox, self.Oy, self.Oz, self.psi, self.theta, self.phi)
        self.get_logger().info('I computed thetas: "%s"' % str(res))
        #res = [0., 1.571, 0., 0., 0., 0.]
        self.publishing(res)

    def publishing(self, thetas):
        # rclpy.init(args=None)

        # Create message with the same type as the topic, GoalRotaryServo
        msg = GoalRotaryServo()
        msg2 = GoalRotaryServo()
        msg3 = GoalRotaryServo()
        msg4 = GoalRotaryServo()
        msg5 = GoalRotaryServo()
        msg6 = GoalRotaryServo()

        position_deg = thetas[0]*180/3.1416

        delta = 0*10
        # while rclpy.ok():
        for i in range(1):
            # Fill message content
            msg.position = thetas[0]
            msg.velocity = 0.4  # Velocity in rads/s
            msg.control_type = 4  # Position and velocity control

            msg2.position = thetas[1]
            msg2.velocity = 0.4  # Velocity in rads/s
            msg2.control_type = 4  # Position and velocity control

            msg3.position = thetas[2]
            msg3.velocity = 0.4  # Velocity in rads/s
            msg3.control_type = 4  # Position and velocity control

            msg4.position = thetas[3]
            msg4.velocity = 0.4  # Velocity in rads/s
            msg4.control_type = 4  # Position and velocity control

            msg5.position = thetas[4]
            msg5.velocity = 0.4  # Velocity in rads/s
            msg5.control_type = 4  # Position and velocity control

            msg6.position = thetas[5]
            msg6.velocity = 0.4  # Velocity in rads/s
            msg6.control_type = 4  # Position and velocity control

            # Publish message!
            self.pub.publish(msg)
            self.pub2.publish(msg2)
            self.pub3.publish(msg3)
            self.pub4.publish(msg4)
            self.pub5.publish(msg5)
            self.pub6.publish(msg6)

            # sleep(1.)

            position_deg += delta
            if position_deg > 90.0:
                delta = -10
            elif position_deg < -90.0:
                delta = 10
            else:
                pass


def c(a):
    return cos(a)


def s(a):
    return sin(a)


def _R(psi, theta, phi):
    R = [[c(phi)*c(theta), c(phi)*s(theta)*s(psi)-s(phi)*c(psi), c(phi)*s(theta)*c(psi)+s(phi)*s(psi)],
         [s(phi)*c(theta), s(phi)*s(theta)*s(psi)+c(phi) *
         c(psi), s(phi)*s(theta)*c(psi)-c(phi)*s(psi)],
         [-s(theta), c(theta)*s(psi), c(theta)*c(psi)]]
    return R

# functions
#! slide 23 r & s formulas inverted?


def _r(xc, yc):
    return abs(sqrt(xc**2+yc**2))  # careful could also be negative?


def _S(zc):
    return abs(zc-d1)  # careful could also be negative?


def _D(xc, yc, zc):
    S = _S(zc)
    r = _r(xc, yc)
#    return 1
    D = ((S ** 2) + (r ** 2) - (a2 ** 2) - (a3 ** 2)) / (2 * a2 * a3)
    return round(D, 14)  # round(D,14)


def _theta1(p, xc, yc, zc):
    return atan2(yc, xc)+p[0]


def _theta3(p, xc, yc, zc):
    D = _D(xc, yc, zc)
    return atan2(p[1]*sqrt(1-D**2), D)


def _theta2(p, xc, yc, zc):
    S = _S(zc)
    r = _r(xc, yc)
    theta3 = _theta3(p, xc, yc, zc)
    s3 = s(theta3)
    c3 = c(theta3)
    return atan2(S, r) - atan2(a3*s3, a2+a3*c3)


def _theta5(p, xc, yc, zc, R):
    theta1 = _theta1(p, xc, yc, zc)
    s1 = s(theta1)
    c1 = c(theta1)
    return atan2(p[2]*sqrt(1-(s1*R[0][2]-c1*R[1][2])**2), s1*R[0][2]-c1*R[1][2])


def _theta4(p, xc, yc, zc, R):
    theta1 = _theta1(p, xc, yc, zc)
    s1 = s(theta1)
    c1 = c(theta1)
    theta2 = _theta2(p, xc, yc, zc)
    theta3 = _theta3(p, xc, yc, zc)
    s23 = s(theta2+theta3)
    c23 = c(theta2 + theta3)
    return atan2(-c1*s23*R[0][2] - s1*s23*R[1][2] + c23*R[2][2], c1*c23*R[0][2]+s1*c23*R[1][2]+s23*R[2][2])


def _theta6(p, xc, yc, zc, R):
    theta1 = _theta1(p, xc, yc, zc)
    s1 = s(theta1)
    c1 = c(theta1)
    return atan2(s1*R[0][1]-c1*R[1][1], -s1*R[1][1]+c1*R[1][0])


def _thetas(p, xc, yc, zc, R):
    theta1 = _theta1(p, xc, yc, zc)
    theta2 = _theta2(p, xc, yc, zc) - pi/2
    theta3 = _theta3(p, xc, yc, zc)
    theta4 = _theta4(p, xc, yc, zc, R)
    theta5 = _theta5(p, xc, yc, zc, R) - pi/2
    theta6 = _theta6(p, xc, yc, zc, R) + pi/2
    return [theta1, theta2, theta3, theta4, theta5, theta6]


def _xc(Ox, R):
    return Ox-d6*R[0][2]


def _yc(Oy, R):
    return Oy-d6*R[1][2]


def _zc(Oz, R):
    return Oz-d6*R[2][2]


def _p(index):  # 4 possibilities for IK
    if index == 1:
        p = [0, +1, +1]
    elif index == 2:
        p = [0, -1, +1]
    elif index == 3:
        p = [pi, +1, +1]
    elif index == 4:
        p = [pi, -1, +1]
    elif index == 5:
        p = [0, +1, -1]
    elif index == 6:
        p = [0, -1, -1]
    elif index == 7:
        p = [pi, +1, -1]
    elif index == 8:
        p = [pi, -1, -1]
    else:
        print("erronous index for p !")
    return p


def ik(Ox, Oy, Oz, psi, theta, phi):

    # get Rotational matrix
    R = _R(psi, theta, phi)

    # get (xc,yc,zc):    #see IK lecture7 p 21
    xc = _xc(Ox, R)
    yc = _yc(Oy, R)
    zc = _zc(Oz, R)

    # choose posibility (1,2,3 or 4)
    p = _p(1)

    # compute angles
    thetas = _thetas(p, xc, yc, zc, R)

    return thetas

####################################################################################################################


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    simple_subscriber = SimpleSubscriber()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(simple_subscriber)
    # Explicity destroy the node
    simple_subscriber.destroy_node()
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()  # call the main function
