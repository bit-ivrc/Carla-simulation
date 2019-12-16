cmake_minimum_required(VERSION 2.8.3)
project(carla_ros_joint_simulation)

add_definitions(-DBOOST_ALL_DYN_LINK)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 ${CMAKE_CXX_FLAGS}")

if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  nav_msgs
  roscpp
  rospy
  std_msgs
  sensor_msgs

)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES carla_ros_joint_simulation
  CATKIN_DEPENDS roscpp rospy std_msgs
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_library(${PROJECT_NAME}
  src/carla_ros_joint_simulation/receive_msg_from_carla.cpp
)

target_link_libraries(${PROJECT_NAME}
        ${catkin_LIBRARIES}
        ${Boost_LIBRARIES}
        )

set(linked_libs
        ${PROJECT_NAME}
        ${catkin_LIBRARIES}
        )

add_executable(carla_ros_node src/carla_ros_joint_simulation/carla_ros_node.cpp)
target_link_libraries(carla_ros_node ${linked_libs})

