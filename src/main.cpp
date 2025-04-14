#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Please enter your command, such as:");
  Serial.println("1. ask me about time passed since start up");
  Serial.println("2. ask me about my name");
  Serial.println("3. ask me about my age");
  Serial.println("4. ask me about my favorite color");
  Serial.println("5. ask me about my favorite food");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { 
    String command = Serial.readStringUntil('\n'); // Read the command from the serial input
    if (command == "How long since you start") {
      Serial.println("Time passed since start up: " + String(millis() / 1000) + " seconds");
    } else if (command == "What is your name") {
      Serial.println("My name is ESP32 Xiao seeed C3 module.");
    } else if (command == "How old are you") {
      Serial.println("I am ageless.");
    } else if (command == "What is your favorite color") {
      Serial.println("My favorite color is blue.");
    } else if (command == "What is your favorite food") {
      Serial.println("My favorite food is pizza.");
    } else {
      Serial.println("I am still a learner, please comeback when I have chatGPT api.");
    }
  }
  delay(100); // Small delay to avoid overwhelming the serial output
}

