/**
 * @file receive_msg_from_carla.hpp
 * @brief this file receives ros topic from carla-ros-bridge
 * @author Haijie Guan
 */

#ifndef CARLA_EXAMPLE_FOR_IVRC_RECEIVE_MSG_FROM_CARLA_H
#define CARLA_EXAMPLE_FOR_IVRC_RECEIVE_MSG_FROM_CARLA_H

#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <nav_msgs/Odometry.h>
class ReceiveMsgFromCarla {

    public:
        ReceiveMsgFromCarla(ros::NodeHandle nh);

        ~ReceiveMsgFromCarla();

        void egoVehiclePoseCb(const nav_msgs::Odometry &ego_vehicle_pose);

        void otherVehiclePoseCb(const nav_msgs::Odometry &vehicle_pose);

        nav_msgs::Odometry ego_vehicle_pose_;
    private:
        nav_msgs::Odometry vehicle_pose_around_ego_vehicle_;

};
#endif //CARLA_EXAMPLE_FOR_IVRC_RECEIVE_MSG_FROM_CARLA_H
