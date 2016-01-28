/*
**   _   __               _   _                _      _            
**  | | / /              | | (_)              | |    | |           
**  | |/ / _ __ ___  __ _| |_ ___   ____ _  __| | ___| | __ _ _ __ 
**  |    \| '__/ _ \/ _` | __| \ \ / / _` |/ _` |/ _ \ |/ _` | '__|
**  | |\  \ | |  __/ (_| | |_| |\ V / (_| | (_| |  __/ | (_| | |   
**  \_| \_/_|  \___|\__,_|\__|_| \_/ \__,_|\__,_|\___|_|\__,_|_|   
**                                                                 
**
**  Exampel on how to get your robot going straight, 
**  from Kreativadelar.se, Sweden
**
**  This code is written "quick & dirty" and should not be as a guide
**  in how to program an Arduino. Feel free to change code as you like
**  and share with your friends.
**
**  If you want to share your code changes, please e-mail them to
**  info@kreativadelar.se and we will put them on our web for other
**  customers to download.
**
**  (C) Kreativadelar.se 2015, Sweden, Patrik
**  http://www.kreativadelar.se
**
**  To use this code you need the following libraries: 
**  
**  Makeblock Library which can be  
**  downloaded free from https://github.com/Makeblock-official/Makeblock-Libraries/archive/master.zip
**
**  Version 1.0, Initial public release, July 2015
**
**  This example code is in the public domain.
**
*/
#include <Arduino.h>
#include <Wire.h>
#include <Servo.h>
#include <SoftwareSerial.h>

#include <MeOrion.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
double Speed;
double OffsetRight;
double OffsetLeft;
MeDCMotor motor_9(9);
MeDCMotor motor_10(10);



void setup(){
    Speed = 255;

    // Offset for each motor set offset for the slowes motor to 1
    // Then start to find a good value for the other in my case it
    // was 0.93 (93%) of the speed that made it go straight
    OffsetRight = 1;
    OffsetLeft = 0.93;
    
    // Wait 5 sec
    delay(1000*5);
    
    for(int i=0;i<1;i++)
    {
        // To adjuste the direction of each motor change -1 to 1 or -1 depending
        // on how you have wired your motors
        motor_9.run(((255) * (OffsetLeft)) * (-1));
        motor_10.run(((255) * (OffsetRight)) * (-1));
        // Wait 5 sec
        delay(1000*5);
        motor_9.run(0);
        motor_10.run(0);
    }
}

void loop(){
    
    
}

