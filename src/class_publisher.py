#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64


class NumberCounter():

  def __init__(self):
    self.count = 0
    self.pub = rospy.Publisher("counter", Float64, queue_size=1)


if __name__ == "__main__":

  rospy.init_node('publisher')
  pub_class = NumberCounter()
  rate = rospy.Rate(2)  # 2 Hz

  pub_class.count = 0

  while not rospy.is_shutdown():

    result = Float64()
    result.data = pub_class.count
    rospy.loginfo(str(result.data))
    pub_class.pub.publish(result)
    pub_class.count = pub_class.count + 1
    rate.sleep()
