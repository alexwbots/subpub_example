#!/usr/bin/env python3
import rospy
from std_msgs.msg import Float64
from std_msgs.msg import String

global resultado
resultado = 0

def funcion(msg): # Tipo callback
  global resultado
  resultado = msg.data  

if __name__ == "__main__":

  rospy.init_node('publishersubscriber')
  rospy.Subscriber('counter', Float64, funcion)
  pub = rospy.Publisher('counter_pair', String, queue_size=1)
  rate = rospy.Rate(2) # 2 Hz
  
  while not rospy.is_shutdown():
    
    msg = String()
    
    if (resultado % 2 == 0):
      enunciado = "Valor par"
    else:
      enunciado = "Valor impar"
    
    msg.data = enunciado
    pub.publish(msg)
    rate.sleep()
