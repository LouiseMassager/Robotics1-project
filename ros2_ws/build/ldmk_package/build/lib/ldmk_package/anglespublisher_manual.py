#!/usr/bin/python3

import rclpy
from rclpy.qos import qos_profile_sensor_data
from hrim_actuator_rotaryservo_msgs.msg import GoalRotaryServo
from time import sleep
import sys
# -------- #


theta1 = sys.argv[1]
theta2 = sys.argv[2]
theta3 = sys.argv[3]
theta4 = sys.argv[4]
theta5 = sys.argv[5]
theta6 = sys.argv[6]

rclpy.init(args=None)

# Create Node with name "angles_publisher"
node = rclpy.create_node("angles_publisher")


# Create a publisher on topic "/hrim_actuation_servomotor_000000000001/goal_axis1"
pub = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000001/goal_axis2', qos_profile=qos_profile_sensor_data)
pub2 = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000001/goal_axis1', qos_profile=qos_profile_sensor_data)
pub3 = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000002/goal_axis1', qos_profile=qos_profile_sensor_data)
pub4 = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000002/goal_axis2', qos_profile=qos_profile_sensor_data)
pub5 = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000003/goal_axis1', qos_profile=qos_profile_sensor_data)
pub6 = node.create_publisher(
    GoalRotaryServo, '/hrim_actuator_rotaryservo_000000000003/goal_axis2', qos_profile=qos_profile_sensor_data)


# Create message with the same type as the topic, GoalRotaryServo
msg = GoalRotaryServo()
msg2 = GoalRotaryServo()
msg3 = GoalRotaryServo()
msg4 = GoalRotaryServo()
msg5 = GoalRotaryServo()
msg6 = GoalRotaryServo()


# Desired position in degrees
position_deg = float(theta1)
position_deg2 = float(theta2)
position_deg3 = float(theta3)
position_deg4 = float(theta4)
position_deg5 = float(theta5)
position_deg6 = float(theta6)

delta = 0*10
while rclpy.ok():
    print("Next Pos =", position_deg)
    # Fill message content
    msg.position = position_deg * 3.1416/180  # Position to rads
    msg.velocity = 0.4  # Velocity in rads/s
    msg.control_type = 4  # Position and velocity control

    msg2.position = position_deg2 * 3.1416/180  # Position to rads
    msg2.velocity = 0.4  # Velocity in rads/s
    msg2.control_type = 4  # Position and velocity control

    msg3.position = position_deg3 * 3.1416/180  # Position to rads
    msg3.velocity = 0.4  # Velocity in rads/s
    msg3.control_type = 4  # Position and velocity control

    msg4.position = position_deg4 * 3.1416/180  # Position to rads
    msg4.velocity = 0.4  # Velocity in rads/s
    msg4.control_type = 4  # Position and velocity control

    msg5.position = position_deg5 * 3.1416/180  # Position to rads
    msg5.velocity = 0.4  # Velocity in rads/s
    msg5.control_type = 4  # Position and velocity control

    msg6.position = position_deg6 * 3.1416/180  # Position to rads
    msg6.velocity = 0.4  # Velocity in rads/s
    msg6.control_type = 4  # Position and velocity control

    # Publish message!
    pub.publish(msg)
    pub2.publish(msg2)
    pub3.publish(msg3)
    pub4.publish(msg4)
    pub5.publish(msg5)
    pub6.publish(msg6)

    # Spin not really needed here since we don't have callbacks
    # rclpy.spin_once(node)

    # Sleep 1 second per loop
    sleep(1.)

#    position_deg += delta
#    if position_deg > 90.0:
#        delta = -10
#    elif position_deg < -90.0:
#        delta = 10
#    else:
#        pass


node.destroy_node()
rclpy.shutdown()
