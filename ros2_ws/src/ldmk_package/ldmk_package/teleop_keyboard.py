#!/usr/bin/python3

import os
import select
import sys
import termios
import tty
from ament_index_python.packages import get_package_share_directory

from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
import rclpy
from rclpy.qos import QoSProfile


ini_msg = """
Control Mara end-effector!
---------------------------
Moving around:
        z
   a    e/d   q
        s

Orientation:
yaw (x):   r/f
pitch (y):  t/g
roll (z):    y/h

Gripper: w/x

space key: force stop

CTRL-C to quit
"""

recall_msg = """
Position:
x axis: a/q
y axis: z/s
z axis: e/d

Orientation:
yaw (x):   r/f
pitch (y):  t/g
roll (z):    y/h

Gripper: w/x
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


def keyboard():

    # initialisation:
    settings = termios.tcgetattr(sys.stdin)
    rclpy.init()
    node = rclpy.create_node('teleop_keyboard')
    pub_ik = node.create_publisher(Twist, 'cmd_ik', 10)
    pub_fingers = node.create_publisher(Float64, 'cmd_fingers', 10)
    print(ini_msg)
    msg_fingers = Float64()
    msg = Twist()

    status = 0
    command_number = 0
    x_step = 0.0
    y_step = 0.0
    z_step = 0.0
    x_ang_step = 0.0  # yaw
    y_ang_step = 0.0  # pitch
    z_ang_step = 0.0  # roll

    fingers_opening = 0.85

    step = 0.01
    step_ang = 0.5
    step_fingers = 0.05

    # keyboard listener:
    try:
        print(msg)
        while(1):
            key = get_key(settings)
            if key == 'a':
                x_step = step
                status = status + 1
            elif key == 'q':
                x_step = -step
                status = status + 1
            else:
                x_step = 0.0

            if key == 'z':
                y_step = step
                status = status + 1
            elif key == 's':
                y_step = -step
                status = status + 1
            else:
                y_step = 0.0

            if key == 'e':
                z_step = step
                status = status + 1
            elif key == 'd':
                z_step = -step
                status = status + 1
            else:
                z_step = 0.0

            if key == 'r':
                x_ang_step = step_ang
                status = status + 1
            elif key == 'f':
                x_ang_step = -step_ang
                status = status + 1
            else:
                x_ang_step = 0.0

            if key == 't':
                y_ang_step = step_ang
                status = status + 1
            elif key == 'g':
                y_ang_step = -step_ang
                status = status + 1
            else:
                y_ang_step = 0.0

            if key == 'y':
                z_ang_step = step_ang
                status = status + 1
            elif key == 'h':
                z_ang_step = -step_ang
                status = status + 1
            else:
                z_ang_step = 0.0

            if key == 'x':
                fingers_opening += step_fingers
            elif key == 'w':
                fingers_opening -= step_fingers

            if key == ' ':
                x_step = 0.0
                y_step = 0.0
                z_step = 0.0
                x_ang_step = 0.0
                y_ang_step = 0.0
                z_ang_step = 0.0
                fingers_opening = 0.0

            if key in ['w', 'x']:
                command_number += 1
                print(10*'_ '+str(command_number)+10*' _')
                print("fingers opening: "+str(round(fingers_opening*100, 10))+'%')
                #print(30*'_ ')
                msg_fingers.data = fingers_opening
                pub_fingers.publish(msg_fingers)

            elif key not in ['a', 'q', 'z', 's', 'e', 'd', 'r', 'f', 't', 'g', 'y', 'h']:
                if (key == '\x03'):
                    break

            if status == 1:
                print(recall_msg)
                status = 0

            if (x_step != 0) or (y_step != 0) or (z_step != 0) or (x_ang_step != 0) or (y_ang_step != 0) or (z_ang_step != 0):
                command_number += 1
                print(10*'_ '+str(command_number)+10*' _')
                print("dx: "+str(x_step))
                print("dy: "+str(y_step))
                print("dz: "+str(z_step))
                print("roll: "+str(x_ang_step))
                print("pitch: "+str(y_ang_step))
                print("yaw: "+str(z_ang_step))
                msg.linear.x = x_step
                msg.linear.y = y_step
                msg.linear.z = z_step
                msg.angular.x = x_ang_step
                msg.angular.y = y_ang_step
                msg.angular.z = z_ang_step
                pub_ik.publish(msg)

    except Exception as e:
        print(e)

    # end of operation:

    finally:
        print("That's all folks! Thank you for playing the game!")
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)


# launch keyboard function at start:
keyboard()
