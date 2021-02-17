#include <Servo.h>  //bagian library pada motor servo

Servo servo;  //deklarasi variabel


void setup() {
  servo.attach(6);  //set variabel servo pada pin 6 arduino

}

void loop() {

  servo.write(0);  //servo berputar sebesar 0 derajat
  delay(2000);    //delay 2 detik
  servo.write(90);  //servo berputar sebesar 90 derajat
  delay(2000);     //delay 2 detik
}
