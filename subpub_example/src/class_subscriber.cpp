#include <ros/ros.h>
#include <std_msgs/Int64.h>

class NumberCounter {

  private:
    ros::Subscriber sub;
  
  public:
    NumberCounter(ros::NodeHandle *nh) {
      sub = nh->subscribe("/counter", 1, &NumberCounter::callback_number, this);
    }
  
    void callback_number(const std_msgs::Int64::ConstPtr& msg) {
      ROS_INFO("Count: [%d]", msg->data);
    }
};

int main (int argc, char **argv)
{
  ros::init(argc, argv, "sub_counter");
  ros::NodeHandle nh;
  NumberCounter nc = NumberCounter(&nh);
  ros::spin();
}
