const unsigned int LED{17};
// add these
const unsigned int MTR_HI{13};
const unsigned int MTR_LO{14};

void setup() {
    pinMode(LED, OUTPUT);

}

void loop(){
    digitalWrite(LED, HIGH); // turn the LED on
    delay(1000); // wait 1 second
    digitalWrite(LED, LOW); // turn the LED off
    delay(1000); // wait 1 second
    analogWrite(MTR_HI, 0);
    for(int i = 50; i < 255; i++){
      analogWrite(MTR_LO, i);
      delay(10);
    }
    for(int i = 255; i > 50; i--){
      analogWrite(MTR_LO, i);
      delay(10);
    }
    analogWrite(MTR_LO, 0);
    for(int i = 50; i < 255; i++){
      analogWrite(MTR_HI, i);
      delay(10);
    }
    for(int i = 255; i > 50; i--){
      analogWrite(MTR_HI, i);
      delay(10);
    }
    
}