#include <SimpleSDAudio.h>

int pinStateCurrent = LOW; // current state of pin

void setup() {
  pinMode(2, INPUT);  // PIR sensor
  pinMode(3, OUTPUT); // LED
  SdPlay.setSDCSPin(4);
  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
    { while(1); }
  if(!SdPlay.setFile("Seraphim.wav")) // music name file
    { while(1); }
  delay(10000); //10s
}

void loop() {
  pinStateCurrent = digitalRead(2);   // read new state
  if (pinStateCurrent == HIGH) {
    {
      digitalWrite(3, HIGH);
      SdPlay.play(); // play music
      while(!SdPlay.isStopped())
        { ; }
      delay(120000); // cooldown of 2 minutes
      digitalWrite(3, LOW);
    }
  }
}
