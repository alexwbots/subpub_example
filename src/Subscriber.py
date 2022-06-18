#!/usr/bin/env python3
import rospy
from std_msgs.msg import Float64

def funcion(msg): # Tipo callback
  resultado = msg.data  
  print(resultado)

if __name__ == "__main__":

  rospy.init_node('subscriber')
  rospy.Subscriber('counter', Float64, funcion)
  rospy.spin()
