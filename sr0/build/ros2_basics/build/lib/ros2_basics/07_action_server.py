import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from custom_interfaces0.action import Myaction
import time

# Create a class that inherits the imported Node class
class ActionServerNode(Node):
    def __init__(self):
    	# Define the name of the node
        super().__init__('my_action_server')
        
        #instanciating the action server
        self.server_=ActionServer(self,Myaction,'my_action_service',self.callback)
        self.get_logger().info('action server ready ...')
    def callback(self, goal_handler):
        #Get the goal
        goal=goal_handler.request.goal_position
        self.get_logger().info(f'Executing the goal position: {goal}')

        #Result and feedback
        result = Myaction.Result()
        feedback = Myaction.Feedback()

        feedback.current_position = [0, 0, 0]

        while not tuple(feedback.current_position) == tuple(goal):
                for i in range(0, len(feedback.current_position)):
                    if not feedback.current_position[i] == goal[i]:
                        feedback.current_position[i] += 1
                self.get_logger().info(f'Feedback: {feedback.current_position}')
                goal_handler.publish_feedback(feedback)
                time.sleep(1)
        #Show that the goal has been reached
        goal_handler.succeed()

        result.result_position = feedback.current_position
        return result
def main():
    rclpy.init()
    action_server = ActionServerNode()
    rclpy.spin(action_server)

if __name__ == '__main__':
    main()


