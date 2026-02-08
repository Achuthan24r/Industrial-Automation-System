int tempPin = A0;
int relayPin = 8;

float temperature;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Machine OFF
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(tempPin);
  temperature = sensorValue * (5.0 / 1023.0) * 100;

  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature > 40) {          // High temperature
    digitalWrite(relayPin, LOW);   // Machine ON
  } else {
    digitalWrite(relayPin, HIGH);  // Machine OFF
  }

  delay(1000);
}
