import rclpy
import time
import serial
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import JointState

class My_subscriber(Node):
	
	def __init__(self):
		self.arduino = serial.Serial(port='/dev/ttyUSB0', baudrate=115200, timeout=.1)
		super().__init__('arduino_subscriber')
		self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback,10)
		self.subscription
		
	def listener_callback(self, joint_state):

		
		a0=joint_state.position[0]*(180/3.1416)+90
		a1=joint_state.position[1]*(180/3.1416)+90
		a2=(joint_state.position[2]/0.0001333)+90
		a3=joint_state.position[3]*(180/3.1416)+90
		b0=int(a0)
		b1=int(a1)
		b2=int(a2)
		b3=int(a3)
		
		self.arduino.write(bytes('V \n',encoding='utf-8'))
		self.arduino.write(bytes('"%s"\n'%b0,encoding='utf-8'))		
		self.get_logger().info('V \n')
		self.get_logger().info('"%s"\n'%b0)
		
		self.arduino.write(bytes('X \n',encoding='utf-8'))
		self.arduino.write(bytes('"%s"\n'%b1,encoding='utf-8'))		
		self.get_logger().info('X \n')
		self.get_logger().info('"%s"\n'%b1)


		self.arduino.write(bytes('Y \n',encoding='utf-8'))
		self.arduino.write(bytes('"%s"\n'%b2,encoding='utf-8'))		
		self.get_logger().info('Y \n')
		self.get_logger().info('"%s"\n'%b2)

		
		self.arduino.write(bytes('Z \n',encoding='utf-8'))
		self.arduino.write(bytes('"%s"\n'%b3,encoding='utf-8'))		
		self.get_logger().info('Z \n')
		self.get_logger().info('"%s"\n'%b3)
				
		
def main():
	rclpy.init()
	my_node=My_subscriber()
	rclpy.spin(my_node)
	
if __name__=='__main__':
	main()