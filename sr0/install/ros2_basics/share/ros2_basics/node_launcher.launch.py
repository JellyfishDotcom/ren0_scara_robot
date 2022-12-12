from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    #Instanciate description
    description = LaunchDescription()

    #Nodes to execute
    publisher_node = Node(package = 'ros2_basics',
                          executable = 'publisher',
                          remappings = [('my_topic42', 'my_topic')])

    subscriber_node = Node(package = 'ros2_basics',
                           executable = 'subscriber',
                           remappings = [('my_topic42', 'my_topic')],
                           name = 'my_subscriber')

    parameters_node = Node(package = 'ros2_basics',
                           executable = 'parameters',
                           parameters = [{'period':2.0},{'units':'kelvin'}])
    
    #Add the nodes to the description
    description.add_action(publisher_node)
    description.add_action(subscriber_node)
    description.add_action(parameters_node)

    return description

