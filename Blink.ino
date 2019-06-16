/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/




// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(16, OUTPUT);
  pinMode(15, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  int count = 0;
  int delaylight = 200;
  
  for (count; count < 100; count++) {
    Serial.println("Hi");
    digitalWrite(16, 1);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(15, LOW); 
    delay(delaylight);                       // wait for a second
    Serial.print("Hello ");
    
    digitalWrite(16, 0);
    digitalWrite(15, HIGH); // turn the LED off by making the voltage LOW
    delay(delaylight);                       // wait for a second
    Serial.println("World");
    delaylight+500;
  };

  Serial.print(count);

  for (count; count > 0; count--) {
    Serial.println("Hi");
    digitalWrite(16, 1);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(15, LOW); 
    delay(delaylight);                       // wait for a second
    Serial.print("Hello ");
    
    digitalWrite(16, 0);
    digitalWrite(15, HIGH); // turn the LED off by making the voltage LOW
    delay(delaylight);                       // wait for a second
    Serial.println("World");
    delaylight-500;
  };
}
