#!/usr/bin/env python3
import rospy
from std_msgs.msg import String
from std_msgs.msg import Float64

class NumberCounter:
  
  def __init__(self):
    self.count = 0
    self.resultado = 0
    self.sub = rospy.Subscriber("counter", Float64, self.funcion)
    self.pub = rospy.Publisher("counter_pair", String, queue_size=1)

  def funcion(self, msg): # Tipo callback
    self.resultado = msg.data

if __name__ == "__main__":

  rospy.init_node('publishersubscriber')
  class_pub = NumberCounter()
  rate = rospy.Rate(2) # 2 Hz
  
  while not rospy.is_shutdown():
    
    message = String()
    
    if (class_pub.resultado % 2 == 0):
      message.data = "Valor par"
    else:
      message.data = "Valor impar"
    
    class_pub.pub.publish(message)
    rate.sleep()
