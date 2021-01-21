/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la novena programacion 
 * en Arduino, o sea las distintas configuraciones que existen en los pulsadores
 * y poder ver que valor nos da en el Monitor Serie.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?v=lxRymAxuR5A,
 * Si te gusto no te olvides suscribirte, compartir y dejar tu Me Gusta 
 * para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Pulsador_1 = 2; //Pull_Up.
int Pulsador_2 = 3; //Pull_Down.
int Pulsador_3 = 4; //Pull_Up activa por Arduino.
int Valor;  //Se declara la variable "Valor" en que estara los estados de 0 y 1 del Pulsador_1.
int Valor2; //Se declara la variable "Valor2" en que estara los estados de 0 y 1 del Pulsador_2.
int Valor3; //Se declara la variable "Valor3" en que estara los estados de 0 y 1 del Pulsador_3.

void setup() {  //Configuracion de los Pines o Comunicacion Serial y Sensores
  Serial.begin(9600); //Se inicia la Comunicacion Serial del Monitor Serie.
  pinMode(Pulsador_1, INPUT); //Se declara el pin como Entrada.
  pinMode(Pulsador_2, INPUT); //Se declara el pin como Entrada.
  pinMode(Pulsador_3, INPUT_PULLUP); //Se declara el pin como Entrada pero Activando la Resistencia Interna del Arduino.
}

void loop() { //Codigo a Escribir "Ciclo Repetitivo"
  Valor = digitalRead(Pulsador_1);   //Los Estados de 0 y 1 estaran almacenados en la variable "Valor".
  Valor2 = digitalRead(Pulsador_2);  //Los Estados de 0 y 1 estaran almacenados en la variable "Valor2".
  Valor3 = digitalRead(Pulsador_3);  //Los Estados de 0 y 1 estaran almacenados en la variable "Valor3".
  
  //Se imprime los valores 1 y 0 del Pulsador 1.
  Serial.print("Pulsador 1: "); //Se imprime el texto en el Monitor Serie.
  Serial.println(Valor);       //Se imprime el valor de la varible "Valor3".
  
  //Se imprime los valores 0 y 1 del Pulsador 2.
  Serial.print("Pulsador 2: "); //Se imprime el texto en el Monitor Serie.
  Serial.println(Valor2);       //Se imprime el valor de la varible "Valor3".
  
  //Se imprime los valores 1 y 0 del Pulsador 3.
  Serial.print("Pulsador 3: "); //Se imprime el texto en el Monitor Serie.
  Serial.println(Valor3);       //Se imprime el valor de la varible "Valor3".
  
  delay(200); //Tiempo de Anti-rebote para el Pulsador.
}
