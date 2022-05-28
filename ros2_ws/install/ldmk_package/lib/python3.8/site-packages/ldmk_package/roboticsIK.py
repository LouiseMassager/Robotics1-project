#!/usr/bin/python3
import numpy as np
import math
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
        self.Oz = 1.1566
        self.phi = 0
        self.theta = 0
        self.psi = 0

        self.subscriber

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

        self.get_logger().info('Going to initial position...')
        self.publishing([pi/2, 0., 0., 0., 0., 0.])
        self.get_logger().info('Initial position reached. Ready for operation')

    def listener_callback(self, msg):
        # print the log info in the terminal
        self.get_logger().info('I received steps: "%s"' % str(msg))
        self.Ox = self.Ox + msg.linear.x
        self.Oy = self.Oy + msg.linear.y
        self.Oz = self.Oz + msg.linear.z
        self.psi = self.psi + msg.angular.x
        self.theta = self.theta + msg.angular.y
        self.phi = self.phi + msg.angular.z
        self.get_logger().info("I'm going to: '%s'" %
                               str([self.Ox, self.Oy, self.Oz]))
        # desired position
        res = IK(self.Ox, self.Oy, self.Oz, self.psi, self.theta, self.phi)
        self.get_logger().info('I computed thetas: "%s"' % str(res))
        self.publishing(res)

    def publishing(self, thetas):
        # Create message with the same type as the topic, GoalRotaryServo
        msg = GoalRotaryServo()
        msg2 = GoalRotaryServo()
        msg3 = GoalRotaryServo()
        msg4 = GoalRotaryServo()
        msg5 = GoalRotaryServo()
        msg6 = GoalRotaryServo()

        position_deg = thetas[0]*180/3.1416

        delta = 0*10
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


def isOrthogonal(R):
    # Check if a rotation matrix R is orthogonal

    shouldBeIdentity = np.dot(R, np.transpose(R))
    I = np.identity(3)
    n = np.linalg.norm(I - shouldBeIdentity)

    return n < 1e-6


def compute_0R6(yaw, pitch, roll):

    cy, sy = math.cos(math.radians(yaw)), math.sin(math.radians(yaw))
    Rx = np.array([[1,  0,   0],
                   [0, cy, -sy],
                   [0, sy,  cy]])

    cp, sp = math.cos(math.radians(pitch)), math.sin(math.radians(pitch))
    Ry = np.array([[cp, 0, sp],
                   [0, 1,  0],
                   [-sp, 0, cp]])

    cr, sr = math.cos(math.radians(roll)), math.sin(math.radians(roll))
    Rz = np.array([[cr, -sr, 0],
                   [sr,  cr, 0],
                   [0,   0, 1]])

    R60 = np.dot(Rz, np.dot(Ry, Rx))

    return R60


def getWristPosition(pex, pey, pez, d6, R60):

    pwx = pex - d6 * R60[0, 2]
    pwy = pey - d6 * R60[1, 2]
    pwz = pez - d6 * R60[2, 2]

    return pwx, pwy, pwz


def computeFirstThreeAngles(pwx, pwy, pwz, d1, a2, a3):

    theta1 = math.atan2(pwy, pwx)

    r = math.sqrt(pwx**2+pwy**2)
    s = pwz-d1
    D = (r**2+s**2-a2**2-a3**2)/(2*a2*a3)

    if D > 1:
        print("Warning: D >> 1 !!!")

    theta3 = math.atan2(math.sqrt(1-D**2), D)

    c3, s3 = math.cos(theta3), math.sin(theta3)
    theta2 = math.atan2(s, r) - math.atan2(a3*s3, a2+a3*c3)

    return theta1, theta2, theta3


def pose(a, alpha, d, theta):

    r11 = math.cos(theta)
    r21 = math.sin(theta)
    r31 = 0

    r12 = - math.sin(theta) * math.cos(alpha)
    r22 = math.cos(theta) * math.cos(alpha)
    r32 = math.sin(alpha)

    r13 = math.sin(theta) * math.sin(alpha)
    r23 = - math.cos(theta) * math.sin(alpha)
    r33 = math.cos(alpha)

    px = a * math.cos(theta)
    py = a * math.sin(theta)
    pz = d

    T = np.array([[r11, r12, r13, px],
                  [r21, r22, r23, py],
                  [r31, r32, r33, pz],
                  [0,   0,   0,  1]])  # [Spong p.69]

    return T


def compute_0R3(theta1, theta2, theta3, d1, a2, a3):

    A1 = pose(0, math.pi/2, d1, theta1)
    A2 = pose(a2, 0, 0, theta2)
    A3 = pose(a3, 0, 0, theta3)

    T30 = np.dot(np.dot(A1, A2), A3)

    x = T30[0, 3]
    y = T30[1, 3]
    z = T30[2, 3]

    R30 = T30[0:3, 0:3]

    return R30


def computeLastThreeAngles(R63):

    [[r11, r12, r13],
     [r21, r22, r23],
     [r31, r32, r33]] = R63

    theta5 = math.atan2(math.sqrt(1-r33**2), r33)

    theta4 = math.atan2(r23, r13)

    theta6 = math.atan2(r32, -r31)

    return theta4, theta5, theta6


def actuator_limitations(theta_vec):

    for i in range(0, len(theta_vec)):

        if theta_vec[i] < - math.pi:
            theta_vec[i] += 2*math.pi
        elif theta_vec[i] > math.pi:
            theta_vec[i] -= 2*math.pi
        else:
            pass

    return theta_vec


def IK(pex, pey, pez, yaw, pitch, roll):

    d1 = 0.09122+0.1637   # distance from the base to joint 2
    a2 = 0.19998          # length of Link 2
    a3 = 0.1493+0.1607    # distance from joint 3 to the wrist center
    d6 = 0.1468+0.2449    # distance from the wrist center to the end-effector

    R60 = compute_0R6(yaw, pitch, roll)

    pwx, pwy, pwz = getWristPosition(pex, pey, pez, d6, R60)

    theta1, theta2, theta3 = computeFirstThreeAngles(pwx, pwy, pwz, d1, a2, a3)

    R30 = compute_0R3(theta1, theta2, theta3, d1, a2, a3)

    R63 = np.dot(np.transpose(R30), R60)

    theta4, theta5, theta6 = computeLastThreeAngles(R63)

    return actuator_limitations([theta1 + math.pi/2, - theta2 + math.pi/2, theta3, theta5 - math.pi/2, theta4, theta6 + math.pi/2])


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
