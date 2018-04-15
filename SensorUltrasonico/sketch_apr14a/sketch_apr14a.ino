const byte TRIG = 10; // Constante que serán los puertos que declararemos en la función setup
const byte ECO = 9;
const byte LED = 3;
int duracion, distancia; // Variables para hacer los procesos de medir la distancia y tiempo

void setup() {
  pinMode(TRIG, OUTPUT); // Declarar salidas y entradas de corriente
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, HIGH); // Mandar la corriente por el puerto de la variable TRIG
  delay(1); // Dar un segundo de espera
  digitalWrite(TRIG, LOW); // Cortar el flujo de corriente
  duracion = pulseIn(ECO, HIGH); // Devolver un valor de tiempo en microSegundos
  distancia = duracion / 58.2; // Medir la distancia, el 58.2 está dado por el credor del sensor

  Serial.println(distancia); // Enviar el valor de la distancia por el monitor serial
  delay(200); // detener 200 milisegundos
}
