import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Temperature
from rcl_interfaces.msg import ParameterDescriptor, SetParametersResult

# Create a class that inherits the imported Node class
class Parameters(Node):
    def __init__(self):
    	# Define the name of the node
        super().__init__('my_parameters')

        #Parameters declaretion and callback
        self.declare_parameter('period', 1.0, ParameterDescriptor(description='Publisher period'))
        self.declare_parameter('units', 'celsius', ParameterDescriptor(description='Temperature units'))
        self.add_on_set_parameters_callback(self.parameters_callback)


        #Publisher
        self.publisher_ = self.create_publisher(Temperature, 'my_parameters',10)
        self.timer_ =self.create_timer(self.get_parameter('period').value, self.publish )
        self.get_logger().info('Publisher started...')

        self.msg_=Temperature()

    def parameters_callback(self, params):
        for param in params:
            if param.name == 'period':
                self.timer_.timer_period_ns = param.value*1000000000
        return SetParametersResult(successful = True)


    def publish(self):
        self.msg_.header.stamp = self.get_clock().now().to_msg()
        units=self.get_parameter('units').value
        if units=='celsius':
            self.msg_.temperature = 25.0
        elif units == 'kelvin':
            self.msg_.temperature = 25.0 - 273.15
        else:
            self.get_logger().info('Wrong temperature units')

        self.publisher_. publish(self.msg_)

        
def main(args = None ):
    # Initialize the ROS client for python
    rclpy.init(args = args)

    my_parameters = Parameters()
    rclpy.spin(my_parameters)

if __name__=='__main__':
    main()
