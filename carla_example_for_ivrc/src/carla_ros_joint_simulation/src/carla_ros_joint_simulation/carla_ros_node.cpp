/** @file carla_ros_node.cpp
 *  @brief establish a ros node
 *  @author haijie Guan
 */
#include "ros/ros.h"
#include "carla_ros_joint_simulation/receive_msg_from_carla.h

int main(int argc, char **argv) {
    // Initialize the node, publishers and subscribers.
    ros::init(argc, argv, "carla_ros_node");
    ros::NodeHandle n;
    ros::NodeHandle nh("~");

    ReceiveMsgFromCarla receive_msg_from_carla(nh);
    // Create publishers and subscribers
    // callback function for start and goal
    ros::Subscriber ego_vehicle_pose = n.subscribe("/carla/ego_vehicle/odometry", 1, &ReceiveMsgFromCarla::egoVehiclePoseCb, &receive_msg_from_carla);
    std::string other_vehicle_pose_id;
    std::string other_vehicle_pose_topic;
    ros::Subscriber other_vehicle_pose = n.subscribe("/carla/ego_vehicle/odometry", 1, &ReceiveMsgFromCarla::otherVehiclePoseCb, &receive_msg_from_carla);
    ros::Subscriber end_sub = n.subscribe("/move_base_simple/goal", 1, &MotionPrimitiveSearchTest::goalCb, &motion_primitive_search_test);

    // new dynamic_parameter client
    motion_primitive_search::ParametersTransfer parameters_transfer(nh);

    int scene_num;
    double map_resolution;
    nh.param<int>("scene_num", scene_num, 0);
    nh.param<double>("map_resolution", map_resolution, 0.2);
    motion_primitive_search_test.loadImageAsPlannerMap(scene_num, map_resolution);

    // Publisher in a loop.
    ros::Rate loop_rate(10.0);
    while (nh.ok()) {
        // Wait for next cycle.
        ros::spinOnce();

        loop_rate.sleep();
    }
    return 0;
}