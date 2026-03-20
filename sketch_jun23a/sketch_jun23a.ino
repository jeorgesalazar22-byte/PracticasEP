
int TRIG =10;
int ECO=9;
int LED =3;
int DURACION;//Valores para la lectura almacenamineto y conversion 
int DISTANCIA;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(TRIG,HIGH);
delay(1);
digitalWrite(TRIG,LOW);
DURACION=pulseIn(ECO,HIGH);
DISTANCIA=DURACION/58.2;
Serial.println(DISTANCIA);
delay(200);

//distancia de 20cm o menos señalada con un led 
if(DISTANCIA <=20 && DISTANCIA >=0){
digitalWrite(LED,HIGH);
delay(DISTANCIA*10);
digitalWrite(LED,LOW);

}

}
