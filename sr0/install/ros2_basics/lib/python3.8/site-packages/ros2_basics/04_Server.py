import rclpy
from rclpy.node import Node
from custom_interfaces0.srv import MySrv

class Server(Node):
	
	def __init__(self):
		
		super().__init__('my_server42')
		
		#Instanciating a server
		self.srv_=self.create_service(MySrv, 'my_service42', self.srv_callback)
		self.get_logger().info('Server Initialized...')
	def srv_callback(self, request, response):
		response.c=request.a+request.b
		self.get_logger().info('server requested...')
		return response
			
def main():
	rclpy.init()
	my_srv=Server()
	rclpy.spin(my_srv)
	rclpy.shutdown()
	
if __name__=='__main__':
	main()
