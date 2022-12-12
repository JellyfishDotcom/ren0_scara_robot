#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# Message types
from std_msgs.msg import String

# Inherited node class
class My_publisher(Node): 
    def __init__(self):
        super().__init__("my_publisher")
        
        #Instanciating the publisher
        self.publisher_ = self.create_publisher(String, 'my_topic42',10)
        self.timer_ =self.create_timer(0.5, self.publish )
        self.get_logger().info('Publisher started...')
        self.i =0
    
    #Callback function
    def publish(self):
    	my_msg= String()
    	my_msg.data = 'ROS2 dice que la tlayuda es joto %d veces' %self.i
    	self.publisher_.publish(my_msg)
    	self.i += 1 
    	return
    	
def main():
	rclpy.init()
	
	my_node = My_publisher()
	rclpy.spin(my_node)
	
	rclpy.shutdown()
	       
