/*#include "ros/ros.h"
#include "Paquete_msgs/Tipo_msgs.h"
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "nombre_nodo");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<Paquete_msgs::Tipo_msgs>("nombre_topico", 1);
  ros::Rate loop_rate(Hz);

  while (ros::ok())
  {
    Paquete_msgs::Tipo_msgs variable;
    // Codigo

    pub.publish(variable);
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}*/