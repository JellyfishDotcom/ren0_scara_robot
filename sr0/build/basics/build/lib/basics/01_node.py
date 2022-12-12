import rclpy
from rclpy.node import Node

#create a class that inherits from Node
class My_node(Node):
	def __init__(self):
		#Define the name of the node
		super().__init__('My_node')
		self.get_logger().info('Hello ROS2 node')
		
def main(args=None):
	#Initialize the ROS client from Python
	rclpy.init()
	
	#Intanciating an object of the class My_node
	node=My_node()
	
	#Destroy the node 
	node.destroy_node()
	
	#Shutdown the client
	rclpy.shutdown()
	
if __name__ == '__main__':
	main()
