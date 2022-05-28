#!/usr/bin/python3

from rclpy.node import Node
import rclpy
#from hrim_actuator_rotaryservo_msgs.msg import ControlFinger
#from hrim_actuator_gripper_msgs.msg import ControlFinger
from hrim_actuator_gripper_srvs.srv import ControlFinger

from std_msgs.msg import Float64
from rclpy.qos import ReliabilityPolicy, QoSProfile


import sys
# -------- #



class MinimalClient(Node):

    def __init__(self):
        super().__init__('mara_minimal_client')

        # Create a client for service "/hrim_actuation_gripper_000000000004/goal"
        self.client = self.create_client(
            ControlFinger, "/hrim_actuator_gripper_000000000004/fingercontrol")

        # Wait for service to be avaiable before calling it
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        # Create request with the same type as the service, ControlFinger
        self.req = ControlFinger.Request()
        self.gripclosingangle = 0.85

        
        self.subscriber = self.create_subscription(
            Float64,
            '/cmd_fingers',
            self.listener_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))  # is the most used to read LaserScan data and some sensor data too.
        # prevent unused variable warning
    
    def listener_callback(self, msg):
        # print the log info in the terminal
        self.get_logger().info('I received steps: "%s"' % str(msg.data))
        self.send_request(msg.data)
    
    def send_request(self,gripclosingangle:float):
        self.req.goal_angularposition = 0.86
        self.req.goal_angularposition = gripclosingangle  # 0.37
        self.req.goal_linearposition = 0.95
        self.req.goal_effort = .01
        #self.req.goal_velocity = 0.
        self.future = self.client.call_async(self.req)


####################################################################################################################


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    mara_minimal_client = MinimalClient()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(mara_minimal_client)
    # Explicity destroy the node
    mara_minimal_client.destroy_node()
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()  # call the main function
