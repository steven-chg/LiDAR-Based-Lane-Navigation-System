
### Start-Up Sequence

# First drive the car outside at the point away from the building, and remain static for 30 seconds

# Initialize All Sensors
$ cd demo_ws
$ source devel/setup.bash
$ roslaunch basic_launch sensor_init.launch

# Visulaize the GPS
$ source devel/setup.bash
$ roslaunch basic_launch visualization.launch

# Enable Joystick Control
$ source devel/setup.bash
$ roslaunch basic_launch dbw_joystick.launch

# To Create Pointcept Conda Environment
conda env create -f pointcept151.yml -n pointcept151

conda activate pointcept151
python3 src/pointcept151/inference_ros_filter.py

conda activate pointcept151
python3 src/sequence_matching.py

conda activate pointcept151
python3 src/windowSearch_realtime.py

roslaunch src/kiss-icp/ros/launch/odometry.launch topic:=/ouster/points

python3 src/pointcept151/inference_ros_filter.py _model_type:=near_ir

