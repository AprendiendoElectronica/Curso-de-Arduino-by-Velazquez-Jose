int Pulsador = 2; //Se declara la variable "Pulsador" en el pin 2 Digital.
int Estado;       //Se declara la variable "Estado" en donde se almacenaran los estados de 0 y 1 del Pulsador.
int Contador = 0; //Se declara la variable "Contador" con un valor de 0.

void setup() {  //Configuracion de los Pines o Comunicacion Serial y Sensores.
  Serial.begin(9600); //Se inicia la Comunicacion Serial del Monitor Serie.
  pinMode(Pulsador, INPUT_PULLUP); //Se declara el pin como Entrada pero Activando la Resistencia Interna del Arduino.
}

void loop() { //Codigo a Escribir "Ciclo Repetitivo".
  Estado = digitalRead(Pulsador); //Se lee los estados 0 y 1 que luego se almacena en la variable "Estado".
  
  if (Estado == LOW) { //Se utiliza la Funcion "Si" para comparar si el Estado del Pulsador cambia.
    Contador = Contador + 1; //Se suma +1 al valor que tiene la Variable "Contador".
  }
  delay(200); //Se espera 200ms para el antirebote.
  
  Serial.print("Contador: "); //Se imprime el texto "Contador: "en el Monitor Serie.
  Serial.println(Contador);   //Se imprime el valor de la Variable "Contador".
}
