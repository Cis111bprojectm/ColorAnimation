#include <Servo.h>
Servo servol;
void setup() { 
 // initialize the digital pins as an output.
servol.attach(9);
// Turn the Serial Protocol ON
 Serial.begin(9600);
}

void loop() {
 byte byteRead;
 
 Serial.println(Serial1.available());

 /* check if data has been sent from the computer: */
 if (Serial.available()) {
 
 /* read the most recent byte */
 byteRead = Serial.read();
 //You have to subtract '0' from the read Byte to convert from text to a number.
 int numByteRead=byteRead-'0';
 
 if(numByteRead==0){
    servol.write(18);
    Serial.println("The color is Red");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==1){
    servol.write(36);
    Serial.println("The color is Orange");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==2){
    servol.write(54);
    Serial.println("The color is Green");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==3){
    servol.write(72);
    Serial.println("The color is Blue");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==4){
    servol.write(90);
    Serial.println("The color is Purple");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==5){
    servol.write(108);
    Serial.println("The color is Pink");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==6){
    servol.write(126);
    Serial.println("The color is Red");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==7){
    servol.write(144);
    Serial.println("The color is Black");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==8){
    servol.write(162);
    Serial.println("The color is Grey");
    delay(10000);
    servol.write(1);
  }
  else if(numByteRead==9){
    servol.write(180);
    Serial.println("The color is White");
    delay(10000);
    servol.write(1);
  }
  else{
    Serial.println("Error");
    delay(10000);
    servol.write(0);
  }


}
