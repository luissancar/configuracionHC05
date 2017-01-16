// configuracion bluetoothHC-05, (con pulsador)


const int LED=13;
const int BTPWR=12; 

char nombreBT[10]="ArduHC_06";
char pin[5]="1234";
char velocidad='4'; //9600





void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BTPWR,OUTPUT);
  Serial.begin(9600); // Velocidad configuración
  delay(5000); // espara para ejecución

  digitalWrite(LED,LOW);  
  digitalWrite(BTPWR,HIGH); 

  Serial.print("AT");  //AT 
  delay(2000); // espara para ejecución

  Serial.print("AT+NAME");
  Serial.print(nombreBT);
  delay(2000); // espara para ejecución

  Serial.print("AT+PIN");
  Serial.print(pin);
  delay(2000); // espara para ejecución
  
  Serial.print("AT+BAUD");
  Serial.print(velocidad);
  delay(2000); // espara para ejecución


  digitalWrite(LED,HIGH);   //Terminado
}

void loop() {
  // put your main code here, to run repeatedly:

}
