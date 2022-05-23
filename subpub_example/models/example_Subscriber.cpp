/*#include "ros/ros.h"
#include "Paquete_msgs/Tipo_msgs.h"

void chatterCallback(const Paquete_msgs::Tipo_msgs::ConstPtr& msg)
{
  // Codigo
  ROS_INFO("Count: [%f]", msg->data);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "nombre_nodo");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("nombre_topico", 1, chatterCallback);
  ros::spin();

  return 0;
}*/