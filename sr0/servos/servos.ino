#include <Servo.h>
int y;

Servo lk0;
Servo lk1;
Servo lk2;
Servo lk3;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
lk0.attach(13);
lk1.attach(10);
lk2.attach(11);
lk3.attach(12);

}
void loop() {
 while (!Serial.available());
 String v=Serial.readString();
 
 if(v=="V"){
 y=Serial.parseInt();
 y=y+20;
 lk0.write (y); 
}

else{
if(v=="X"){
y=Serial.parseInt();
 y=y+20;
 lk1.write (y); 
}

else{
if(v=="Y"){
y=Serial.parseInt();
 lk2.write (y); 
}

else{
if(v=="Z"){
y=Serial.parseInt();
 y=y+20;
 lk3.write (y); 
}
}
}
}
}