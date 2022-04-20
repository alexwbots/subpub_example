#include "ros/ros.h"
#include "std_msgs/Float64.h"

void chatterCallback(const std_msgs::Float64::ConstPtr& msg)
{
  ROS_INFO("Count: [%f]", msg->data);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("counter", 1, chatterCallback);
  ros::spin();

  return 0;
}
