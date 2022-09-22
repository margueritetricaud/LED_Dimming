int ledPin = 9;
int brightness;
int brightness_corrected;
int steps = 255;
float A;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  A = (steps*log10(2))/(log10(255));
}

void loop() {
  if(brightness>255){
    brightness =0;
  }else{
    brightness +=1;
  }
  brightness_corrected = pow (2, ((brightness)/ A)) - 1;
  Serial.println(brightness_corrected);
  analogWrite(ledPin,brightness_corrected);
  delay(10);
}
