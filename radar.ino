const int echoPin = 2;
const int trigPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("begin");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);

  int distance = duration * 0.034 / 2;

  
  delay(100);
  for(int i = 0; i < distance; i++) {
    Serial.print("-");
  }
  Serial.println("");

}
