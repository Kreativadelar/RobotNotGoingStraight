##How to get your robot to go straight##

When using DC-motor with no feedback the robot will not go straight because the motors can’t be made exactly the same.

In this repo you can find programs and examples on how to fix that problem see video below.
 
![TankBot](/Images/20160128_214141.jpg)

To solve the problem we reduce the speed for the fastest motor, to find the right value start with 0,9 and see if it still turns the same direction. If so reduce more or increase until it starts to go straight, the other motor should have its offset set to 1.

'''
motorSpeedForFastMotor(M1) = (wantedSpeed * offset(0,93 | 93%)) * dir (1 or -1)
motorSpeedForSlowMotor(M2) = (wantedSpeed * offset(1 | 100%)) * dir (1 or -1)
'''

###[Demonstration video](https://youtu.be/81xt4j0n6z4)###

####[A demonstration from Kreativadelar.se](http://www.kreativadelar.se)####

