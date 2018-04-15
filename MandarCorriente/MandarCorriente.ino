const int outPin = 9;
void setup() {
  Serial.begin(9600); // Iniciar puerto serie
  pinMode(outPin, OUTPUT); // Definir nuestro puerto de salida
}

void loop() {
  digitalWrite(outPin, HIGH); // Mandar corriente al pin 9
}
