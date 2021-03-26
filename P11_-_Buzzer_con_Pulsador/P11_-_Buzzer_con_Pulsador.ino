/*
 * Funcion tone(Pin, Frecuencia, Tiempo); //Activa el Tono.
 *              -Pin: Pueden ser cualquier pin PWM del Arduino.
 *              -Frecuencia: Se aceptan valores entre 31Hz y 65535Hz.
 *              -Tiempo: Esta expresado en miliSegundos.
 * Funcion noTone(Pin); //Detiene el Tono.
 * 
 * Ahoras que sabes esto, puedes crear tus propios tonos,
 * variando la Frecuencia y el Tiempo + el Pulsador podes hacer un Organo con Arduino.
 * Saludos Aprendiendo Electronica by Jose Velazquez.
*/

int Buzzer = 3; //Se declara la variable "Buzzer" en el pin 3 de PWM.
int Pulsador = 2;  //Se declara la variable "Pulsador" en el pin 2 Digital.
int Valor;  //Se declara la variable "Valor" en donde se almacenaran los estados de 0 y 1 del Pulsador.

void setup() {  //Configuracion de los Pines o Comunicacion Serial y Sensores.
  pinMode(Buzzer, OUTPUT); //Se declara el Buzzer como Salida.
  pinMode(Pulsador, INPUT_PULLUP);  //Se declara el pin como Entrada pero Activando la Resistencia Interna del Arduino.
}

void loop() { //Codigo a Escribir "Ciclo Repetitivo".
  Valor = digitalRead(Pulsador); //Se lee los estados 0 y 1 que luego se almacena en la variable "Valor".

  if (Valor == LOW) { //Se utiliza la Funcion "if" para comparar si el Estado del Pulsador cambia.
    tone(Buzzer, 2000, 100); //Activa el Tono, y produce el Sonido dependiendo la Frecuencia y el Tiempo.
  }
  else { //else = "sino", o sea en caso contrario a la condicion "if".
    noTone(Buzzer); //Se detiene el Tono, o sea no hay sonido.
  }
}
