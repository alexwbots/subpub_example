#include <ros/ros.h>
#include <std_msgs/Int64.h>

class NumberCounter {

  private:
    int counter;
    ros::Publisher pub;
  
  public:
    NumberCounter(ros::NodeHandle *nh) {
      counter = 0;
      pub = nh->advertise<std_msgs::Int64>("/counter", 1);    
    }
  
    void pub_function() {
      counter = counter + 1;
      std_msgs::Int64 msg;
      msg.data = counter;
      pub.publish(msg);
    }
};

int main (int argc, char **argv)
{
  ros::init(argc, argv, "pub_counter");
  ros::NodeHandle nh;
  NumberCounter nc = NumberCounter(&nh);
  ros::WallRate r(1); // 1 Hz
  while (ros::ok()) {
    nc.pub_function();
    ros::spinOnce();
    r.sleep();
  }
}
