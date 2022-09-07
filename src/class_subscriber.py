#!/usr/bin/env python3
import rospy
from std_msgs.msg import Float64

class NumberCounter:
  
  def __init__(self):
    self.resultado = 0
    self.sub = rospy.Subscriber("counter", Float64, self.funcion)

  def funcion(self, msg): # Tipo callback
    self.resultado = msg.data  
    print(self.resultado)

if __name__ == "__main__":

  rospy.init_node('subscriber')
  NumberCounter()
  rospy.spin()
