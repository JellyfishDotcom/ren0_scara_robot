import rclpy
from rclpy.node import Node
from custom_interfaces0.srv import MySrv

class Client(Node):
	
	def __init__(self):
		
		super().__init__('my_client42')
		#instanciating a client
		self.cli_ = self.create_client(MySrv, 'my_service42')
		self.get_logger().info('client created...')
		
		# wait until the service is ready
		while not self.cli_.wait_for_service(timeout_sec=1.0):
			self.get_logger().info('waiting for the server...')
		
		#instanciating a request
		self.request= MySrv.Request()
		
	def cli_request(self, a, b):
		self.request.a=a
		self.request.b=b
		
		#the response is given through a "future" object
		self.future=self.cli_.call_async(self.request)
	
def main():
	rclpy.init()
	my_client=Client()
	my_client.cli_request(7,3)
	while rclpy.ok():
		if my_client.future.done():
			try:
				response = my_client.future.result()
			except:
				my_client.get_logger().info('Error')
			else:
				my_client.get_logger().info( f'result: {response.c}')
	
	rclpy.spin_once(my_client)
	
	
	rclpy.shutdown()
	
if __name__=='__main__':
	main()
