# Robotics1-project :robot: :mechanical_arm:

Robotics1-project aims to realize a position control of the Mara robot in ROS2 with the physics engine Gazebo in order to move a box around.

## Demonstration
<img src="videos/showoff_gripper.gif" width="200" > <img src="videos/showoff.gif" width="398" >

## Features

In order to run this project, multiple prerequisites are needed. Please refer to the steps in the [MARA repository](https://github.com/AcutronicRobotics/MARA#install).


## Deployment

:triangular_flag_on_post: First, always update the ldmk_package:
```bash
source /opt/ros/foxy/setup.bash
cd ros2_ws
source install/setup.bash
colcon build --packages-select ldmk_package
```

:teacher: To set the Mara robotic joint angles directly:

- step 1: launch the Mara robot in Gazebo <br />
In terminal 1:
```bash
source /opt/ros/foxy/setup.bash
cd ros2_ws
source install/setup.bash
ros2 launch mara_gazebo mara2.launch.py
```
- step 2: set the joint angles (eg. 0°,90°,0°,90°,0°,0°) <br />
In terminal 2:									
```bash
cd ros2_ws
source install/setup.bash
colcon build --packages-select ldmk_package
ros2 run ldmk_package anglespublisher_manual 0 90 0 90 0 0
```

- step 3: open/close the gripper (eg. at 50%) <br />
In terminal 3:	
```bash
cd ros2_ws
source install/setup.bash
colcon build --packages-select ldmk_package
ros2 run ldmk_package fingersclient_manual 0.5
```


:woman_teacher: To deploy a simulation of the Mara robotic arm multiple nodes must be run

- step 1: launch the Mara robot in Gazebo <br />
In terminal 1:
```bash
source /opt/ros/foxy/setup.bash
cd ros2_ws
source install/setup.bash
ros2 launch mara_gazebo mara2.launch.py
```
- step 2: listen to end-effector position or joint angles commands <br />
In terminal 2:									
```bash
cd ros2_ws
source install/setup.bash
ros2 launch ldmk_package maraik.launch.py
```

- step 3: listen to keyboard commands to move and open the end-effector <br />
terminal 3:									
```bash
cd ros2_ws
source install/setup.bash
ros2 run ldmk_package teleop_keyboard run
```

:ear: To listen to a topic (eg. /cmd_ik or /cmd_fingers)
- additional terminal:
```bash
cd ros2_ws
source install/setup.bash
ros2 topic echo /cmd_ik
```

## Author

- [@Louise Massager](https://github.com/LouiseMassager)
- [@Dinh-Hao Nguyen](https://github.com/Dinh-Hao-Nguyen)
- [@Mohammadjavad Rahimi](https://github.com/MJSk8RAHIMI)


## Acknowledgements

- ["Robotics1 project- Mara" of @illias38](https://app.theconstructsim.com/#/Rosjects/mara%20robot).
- ["Test Mara Sim" of @albertoezquerro](https://app.theconstructsim.com/#/Rosjects/mara%20robot).


