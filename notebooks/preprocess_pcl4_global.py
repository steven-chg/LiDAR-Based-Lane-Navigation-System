#!/usr/bin/env python
import rospy
import sensor_msgs.point_cloud2 as pc2
from sensor_msgs.msg import PointCloud2, PointField
import std_msgs.msg
import numpy as np
from functools import lru_cache
import time

from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose, PoseStamped
import tf2_ros
import tf2_geometry_msgs

class PointCloudFilter:
    def __init__(self):
        # Initialize parameters
        self.ring_threshold = 80

        # Initialize the ROS node
        rospy.init_node('filtered_point_cloud_node', anonymous=True)

        # Pre-define the output fields for efficiency
        self.output_fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
            PointField(name='intensity', offset=12, datatype=PointField.FLOAT32, count=1)
        ]

        # # Create publisher for filtered point cloud
        # self.filtered_pub = rospy.Publisher(
        #     'ouster/points_filtered',
        #     PointCloud2,
        #     queue_size=10
        # )

        # Subscribe to raw point cloud
        self.sub = rospy.Subscriber(
            'ouster/points',
            PointCloud2,
            self.point_cloud_callback,
            queue_size=1
        )

        # Create publisher for filtered point cloud (global coordinates)
        self.filtered_global_pub = rospy.Publisher(
            'ouster/points_filtered_global',
            PointCloud2,
            queue_size=10
        )

        # Subscribe to the KISS-ICP odometry topic
        self.odometry_sub = rospy.Subscriber(
            '/kiss/odometry',
            Odometry,
            self.odometry_callback,
            queue_size=1
        )

        # # Set up the TF2 buffer and listener
        # self.tf2_buffer = tf2_ros.Buffer()
        # self.tf2_listener = tf2_ros.TransformListener(self.tf2_buffer)

        self.current_pose = Pose()

        rospy.loginfo("Point cloud filter node initialized")

    def odometry_callback(self, odometry_msg):
        # Update the current pose
        self.current_pose = odometry_msg.pose.pose
        self.odometry_timestamp = odometry_msg.header.stamp
        self.odometry_seq = odometry_msg.header.seq

    def point_cloud_callback(self, msg):
        """Optimized callback function to filter and transform incoming point cloud data."""
        try:
            # Check if the point cloud timestamp is close enough to the odometry timestamp
            # time_diff = abs((msg.header.stamp - self.odometry_timestamp).to_sec())
            # seq_diff = abs(msg.header.seq - self.odometry_seq)
            # if time_diff > 0.1:  # Adjust the time window as needed
            #     rospy.logwarn("Point cloud and odometry timestamps are not synchronized.")
            #     return
            # print("Sequence Difference: " + str(seq_diff))
            
            # filtered = []
            filtered_global = []
            for point in pc2.read_points(msg, skip_nans=True):

                # check the pose frame_id and point cloud frame id
                print(self.current_pose.child_frame_id)
                print(msg.header.frame_id)

                if point[6]>=self.ring_threshold:
                    # Append the local points
                    # filtered.append((point[0],point[1],point[2],point[6]))
                    # Use the global position from the Odometry message
                    global_x = self.current_pose.position.x
                    global_y = self.current_pose.position.y
                    global_z = self.current_pose.position.z
                    filtered_global.append((global_x, global_y, global_z, point[6]))

            # # Create header
            # header = std_msgs.msg.Header()
            # header.stamp = msg.header.stamp
            # header.frame_id = msg.header.frame_id

            # # Create and publish filtered cloud
            # filtered_msg = pc2.create_cloud(
            #     header,
            #     self.output_fields,
            #     filtered
            # )
            # self.filtered_pub.publish(filtered_msg)

            # Create header (global coordinates)
            header_global = std_msgs.msg.Header()
            header_global.stamp = msg.header.stamp
            header_global.frame_id = msg.header.frame_id

            # Create and publish filtered cloud (global coordinates) 
            filtered_msg_global = pc2.create_cloud(
                header_global,
                self.output_fields,
                filtered_global
            )
            self.filtered_global_pub.publish(filtered_msg_global)

        except Exception as e:
            rospy.logerr(f"Error processing point cloud: {str(e)}")

def main():
    try:
        node = PointCloudFilter()
        rospy.spin()
    except rospy.ROSInterruptException:
        rospy.loginfo("Shutting down point cloud filter node")

if __name__ == '__main__':
    main()

########################################################################################################################################

import rospy
import sensor_msgs.point_cloud2 as pc2
from sensor_msgs.msg import PointCloud2, PointField
import std_msgs.msg
import numpy as np

from nav_msgs.msg import Odometry
import tf2_ros
import tf2_geometry_msgs

class PointCloudFilter:
    def __init__(self):
        # Initialize parameters
        self.ring_threshold = 80

        # Initialize the ROS node
        rospy.init_node('filtered_point_cloud_node', anonymous=True)

        # Pre-define the output fields for efficiency
        self.output_fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
            PointField(name='intensity', offset=12, datatype=PointField.FLOAT32, count=1)
        ]

        # Create publisher for filtered point cloud (global coordinates)
        self.filtered_global_pub = rospy.Publisher(
            'ouster/points_filtered_global',
            PointCloud2,
            queue_size=10
        )

        # Subscribe to the KISS-ICP odometry topic
        self.odometry_sub = rospy.Subscriber(
            '/kiss/odometry',
            Odometry,
            self.odometry_callback,
            queue_size=1
        )

        # Subscribe to raw point cloud
        self.sub = rospy.Subscriber(
            'ouster/points',
            PointCloud2,
            self.point_cloud_callback,
            queue_size=1
        )

        # Set up the TF2 buffer and listener
        self.tf2_buffer = tf2_ros.Buffer()
        self.tf2_listener = tf2_ros.TransformListener(self.tf2_buffer)

        self.current_pose = Odometry().pose.pose
        # self.odometry_timestamp = None
        # self.odometry_seq = None

        self.global_points = np.empty((0, 3), dtype=np.float32)
        self.global_intensities = []

        rospy.loginfo("Point cloud filter node initialized")

    def odometry_callback(self, odometry_msg):
        # Update the current pose
        self.current_pose = odometry_msg.pose.pose
        # self.odometry_timestamp = odometry_msg.header.stamp
        # self.odometry_seq = odometry_msg.header.seq

    def point_cloud_callback(self, msg):
        """Optimized callback function to filter and transform incoming point cloud data."""
        try:
            global_points = []
            global_intensities = []

            # Get the latest transform from the point cloud frame to the 'odom' frame
            try:
                transform = self.tf2_buffer.lookup_transform(
                    'odom', msg.header.frame_id, rospy.Time(0))
            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
                rospy.logerr(f"Error getting transform: {str(e)}")
                return

            for i in range(msg.height * msg.width):
                x = msg.data[i * msg.point_step + 0]
                y = msg.data[i * msg.point_step + 4]
                z = msg.data[i * msg.point_step + 8]
                intensity = msg.data[i * msg.point_step + 12]

                if intensity >= self.ring_threshold:
                    # Transform the point to the global frame
                    point_stamped = PoseStamped()
                    point_stamped.pose.position.x = x
                    point_stamped.pose.position.y = y
                    point_stamped.pose.position.z = z
                    transformed_point = tf2_geometry_msgs.do_transform_pose(point_stamped, transform).pose
                    global_points.append([transformed_point.position.x, transformed_point.position.y, transformed_point.position.z])
                    global_intensities.append(intensity)

            # Create header
            header_global = std_msgs.msg.Header()
            header_global.stamp = msg.header.stamp
            header_global.frame_id = 'odom'

            # Create and publish filtered cloud (global coordinates)
            filtered_msg_global = pc2.create_cloud(
                header_global,
                self.output_fields,
                list(zip(global_points, global_intensities))
            )
            self.filtered_global_pub.publish(filtered_msg_global)

            # Store the global points and intensities in NumPy arrays
            self.global_points = np.concatenate((self.global_points, np.array(global_points, dtype=np.float32)), axis=0)
            self.global_intensities.extend(global_intensities)

        except Exception as e:
            rospy.logerr(f"Error processing point cloud: {str(e)}")

def main():
    try:
        node = PointCloudFilter()
        rospy.spin()
    except rospy.ROSInterruptException:
        rospy.loginfo("Shutting down point cloud filter node")

if __name__ == '__main__':
    main()