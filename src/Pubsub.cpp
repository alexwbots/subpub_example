#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64.h"
#include <sstream>

int result = 0;

void function_cb(const std_msgs::Float64::ConstPtr& msg)
{
  result = msg->data;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publishersubscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("counter", 1, function_cb);
  ros::Publisher pub = n.advertise<std_msgs::String>("counter_pair", 1);
  ros::Rate loop_rate(2);

  int count = 0;
  while (ros::ok())
  {
    std_msgs::String message;
    
    if(result % 2 == 0){
      message.data = "Pair value";
    }
    else{
      message.data = "Odd value";
    }
    
    pub.publish(message);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
}
