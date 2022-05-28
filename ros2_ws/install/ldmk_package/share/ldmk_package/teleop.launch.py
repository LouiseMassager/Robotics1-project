from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ldmk_package',
            executable='teleop_keyboard',
            output='screen'),
    ])
