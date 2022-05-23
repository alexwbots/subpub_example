#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64

if __name__ == "__main__":

  rospy.init_node('publisher')
  pub = rospy.Publisher('counter', Float64, queue_size=1)
  rate = rospy.Rate(2) # 2 Hz
  
  count = 0
  
  while not rospy.is_shutdown():
    
    result = Float64()
    result.data = count
    rospy.loginfo(str(result.data))
    pub.publish(result)
    count = count + 1
    rate.sleep()
