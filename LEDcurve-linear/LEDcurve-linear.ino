int ledPin = 9;
int brightness;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(brightness>=255){
    brightness =0;
  }else{
    brightness +=1;
  }
  Serial.println(brightness);
  analogWrite(ledPin,brightness);
  delay(10);
}
