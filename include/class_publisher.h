#ifndef CLASS_PUBLISHER_H
#define CLASS_PUBLISHER_H

#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

namespace example { 
  
  class class_publisher
  class_publisher::class_publisher(const ros::NodeHandle& node_handle) : nh_{node_handle}{
    exam_pub_ = nh_.advertise<std_msgs::String>("wp", 1, true);
    std_msgs::String msg;
    std::stringstream ss;
  }
  
  void class_publisher::do_publish(){

};

#endif
