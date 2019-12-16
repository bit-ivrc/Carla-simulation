/**
 * @file receive_msg_from_carla.cpp
 * @brief this file receives ros topic from carla-ros-bridge
 * @author Haijie Guan
 */

#include "carla_ros_joint_simulation/receive_msg_from_carla.h"
ReceiveMsgFromCarla::ReceiveMsgFromCarla(ros::NodeHandle nh) {

};

ReceiveMsgFromCarla::~ReceiveMsgFromCarla() {

}

void ReceiveMsgFromCarla::egoVehiclePoseCb(const nav_msgs::Odometry &ego_vehicle_pose) {
    ego_vehicle_pose_ = ego_vehicle_pose;
}

void ReceiveMsgFromCarla::otherVehiclePoseCb(const nav_msgs::Odometry &other_vehicle_pose) {
    vehicle_pose_around_ego_vehicle_ = other_vehicle_pose;
}