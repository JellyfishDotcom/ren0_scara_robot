import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class My_subscriber(Node):
	
	def __init__(self):
		
		super().__init__('my_subscriber42')
		self.subscription = self.create_subscription(String, 'my_topic42', self.listener_callback,10)
		self.subscription
		
	def listener_callback(self, msg):
		
		self.get_logger().info('ya wache que "%s"' %msg.data)
		
def main():
	rclpy.init()
	my_node=My_subscriber()
	rclpy.spin(my_node)
	rclpy.shutdown()
	
if __name__=='__main__':
	main()
