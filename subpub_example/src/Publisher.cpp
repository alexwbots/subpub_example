#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<std_msgs::Float64>("counter", 1);
  ros::Rate loop_rate(2);

  int count = 0;
  while (ros::ok())
  {
    std_msgs::Float64 number;
    number.data = (float)count;
    ROS_INFO("%f", number.data);

    pub.publish(number);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
}