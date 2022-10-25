# ren0_scara_robot
This a students proyect where we design and build a Scara robot with 4 DOF.

## **Description of directoryes:**
- In **reno_sw** you can find all the Solidworks files needed for the physic construction of this robot
- In **URDF** you can find the .STL and urdf.xml files that makes posible the simulation of this robot in Pybullet and the posterior manage in ROS

## Visualize in Pybullet simulator
### Conda enviroment
In this proyect, we use a Conda enviroment call 'robotics' that can be created by running in your terminal the following command:
```
# conda create -n robotics python=3
```
### Installing Pybullet simulator
This could easily make by run in your terminal the command:
```
# pip install pybullet
```
### Visualizing ren0 in Pybullet 
When you are in the ubication where you import this proyect, run in yoru terminal:
```
# conda activate robotics
# python visualize_ren0.py
```
