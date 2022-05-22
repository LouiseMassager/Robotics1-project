#!/usr/bin/python3

import rclpy
from rclpy.qos import qos_profile_sensor_data
from hrim_actuator_rotaryservo_msgs.msg import GoalRotaryServo
from time import sleep
import sys
from rclpy.node import Node

from rclpy.qos import ReliabilityPolicy, QoSProfile
from geometry_msgs.msg import Twist
# -------- #


class ThetasSubscriber(Node):

    def __init__(self):
        super().__init__('angles_publisher')
        self.subscriber = self.create_subscription(
            Twist,
            '/cmd_thetas',
            self.listener_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))  # is the most used to read LaserScan data and some sensor data too.
        # prevent unused variable warning

        # initialization
        self.theta1 = 0
        self.theta2 = 0
        self.theta3 = 0
        self.theta4 = 0
        self.theta5 = 0
        self.theta6 = 0

        self.subscriber
        # define the variable to save the received info
        # self.laser_forward = 0

        # Create a publisher on topic "/hrim_actuation_servomotor_000000000001/goal_axis1"
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
        self.get_logger().info('I receive: "%s"' % str(msg))
        # self.publish(msg.linear.x, msg.linear.y, msg.linear.z,msg.angular.x, msg.angular.y, msg.angular.z)
        self.publish(0., 1.571, 0., 0., 0., 0.)

    def publish(self, theta1, theta2, theta3, theta4, theta5, theta6):
        # rclpy.init(args=None)

        # Create message with the same type as the topic, GoalRotaryServo
        msg = GoalRotaryServo()
        msg2 = GoalRotaryServo()
        msg3 = GoalRotaryServo()
        msg4 = GoalRotaryServo()
        msg5 = GoalRotaryServo()
        msg6 = GoalRotaryServo()

        position_deg = theta1*180/3.1416

        delta = 0*10
        # while rclpy.ok():
        for i in range(1):
            # Fill message content
            msg.position = theta1
            msg.velocity = 0.4  # Velocity in rads/s
            msg.control_type = 4  # Position and velocity control

            msg2.position = theta2
            msg2.velocity = 0.4  # Velocity in rads/s
            msg2.control_type = 4  # Position and velocity control

            msg3.position = theta3
            msg3.velocity = 0.4  # Velocity in rads/s
            msg3.control_type = 4  # Position and velocity control

            msg4.position = theta4
            msg4.velocity = 0.4  # Velocity in rads/s
            msg4.control_type = 4  # Position and velocity control

            msg5.position = theta5
            msg5.velocity = 0.4  # Velocity in rads/s
            msg5.control_type = 4  # Position and velocity control

            msg6.position = theta6
            msg6.velocity = 0.4  # Velocity in rads/s
            msg6.control_type = 4  # Position and velocity control

            # Publish message!
            self.pub.publish(msg)
            self.pub2.publish(msg2)
            self.pub3.publish(msg3)
            self.pub4.publish(msg4)
            self.pub5.publish(msg5)
            self.pub6.publish(msg6)

            # Spin not really needed here since we don't have callbacks
            # rclpy.spin_once(node)

            # Sleep 1 second per loop
            sleep(1.)

            position_deg += delta
            if position_deg > 90.0:
                delta = -10
            elif position_deg < -90.0:
                delta = 10
            else:
                pass

        # node.destroy_node()
        # rclpy.shutdown()

####################################################################################################################


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    angles_publisher = ThetasSubscriber()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(angles_publisher)
    # Explicity destroy the node
    angles_publisher.destroy_node()
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()  # call the main function
