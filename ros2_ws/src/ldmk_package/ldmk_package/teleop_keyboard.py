#!/usr/bin/python3

import os
import select
import sys
import termios
import tty
from ament_index_python.packages import get_package_share_directory

from geometry_msgs.msg import Twist
import rclpy
from rclpy.qos import QoSProfile


# to trash:
BURGER_MAX_LIN_VEL = 1.00
BURGER_MAX_ANG_VEL = 2.84
WAFFLE_MAX_LIN_VEL = 0.26
WAFFLE_MAX_ANG_VEL = 1.82
LIN_VEL_STEP_SIZE = 0.01
ANG_VEL_STEP_SIZE = 0.2
TURTLEBOT3_MODEL = 'waffle'
########

msg = """
Control Mara end-effector!
---------------------------
Moving around:
        z
   a    e/d   q
        s

a/q : increase/decrease x-axis
z/s : increase/decrease y-axis
e/d : increase/decrease z-axis


space key: force stop

CTRL-C to quit
"""

e = """
Communications Failed
"""


def get_key(settings):
    tty.setraw(sys.stdin.fileno())
    rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
    if rlist:
        key = sys.stdin.read(1)
    else:
        key = ''

    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


def print_vels(target_linear_velocity, target_angular_velocity):
    print('currently:\tlinear velocity {0}\t angular velocity {1} '.format(
        target_linear_velocity,
        target_angular_velocity))


def make_simple_profile(output, input, slop):
    if input > output:
        output = min(input, output + slop)
    elif input < output:
        output = max(input, output - slop)
    else:
        output = input

    return output


def constrain(input_vel, low_bound, high_bound):
    if input_vel < low_bound:
        input_vel = low_bound
    elif input_vel > high_bound:
        input_vel = high_bound
    else:
        input_vel = input_vel

    return input_vel


def check_linear_limit_velocity(velocity):
    if TURTLEBOT3_MODEL == 'burger':
        return constrain(velocity, -BURGER_MAX_LIN_VEL, BURGER_MAX_LIN_VEL)
    else:
        return constrain(velocity, -WAFFLE_MAX_LIN_VEL, WAFFLE_MAX_LIN_VEL)


def check_angular_limit_velocity(velocity):
    if TURTLEBOT3_MODEL == 'burger':
        return constrain(velocity, -BURGER_MAX_ANG_VEL, BURGER_MAX_ANG_VEL)
    else:
        return constrain(velocity, -WAFFLE_MAX_ANG_VEL, WAFFLE_MAX_ANG_VEL)


def keyboard():
    settings = termios.tcgetattr(sys.stdin)
    rclpy.init()
#    qos = QoSProfile(depth=10)
    node = rclpy.create_node('teleop_keyboard')
    # pub = node.create_publisher(Twist, 'cmd_vel', qos)
    pub = node.create_publisher(Twist, 'cmd_ik', 10)
    msg = Twist()

    status = 0
    x_velocity = 0.0
    y_velocity = 0.0
    z_velocity = 0.0

    step = 0.01

    try:
        print(msg)
        while(1):
            key = get_key(settings)
            if key == 'a':
                x_velocity = step
                status = status + 1
            elif key == 'q':
                x_velocity = -step
                status = status + 1
            else:
                x_velocity = 0.0

            if key == 'z':
                y_velocity = step
                status = status + 1
            elif key == 's':
                y_velocity = -step
                status = status + 1
            else:
                y_velocity = 0.0

            if key == 'e':
                z_velocity = step
                status = status + 1
            elif key == 'd':
                z_velocity = -step
                status = status + 1
            else:
                z_velocity = 0.0

            if key == ' ':
                x_velocity = 0.0
                y_velocity = 0.0
                z_velocity = 0.0
            elif key not in ['a', 'q', 'z', 's', 'e', 'd']:
                if (key == '\x03'):
                    break

            if status == 10000:  # set time
                print(msg)
                status = 0
            print("x: "+str(x_velocity))
            print("y: "+str(y_velocity))
            print("z: "+str(z_velocity))
            if (x_velocity != 0) or (y_velocity != 0) or (z_velocity != 0):
                msg.linear.x = x_velocity
                msg.linear.y = y_velocity
                msg.linear.z = z_velocity
                pub.publish(msg)

    except Exception as e:
        print(e)

    finally:
        print("That's all folks! Thank you for playing the game!")
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)


# launch keyboard fucntion:
keyboard()
