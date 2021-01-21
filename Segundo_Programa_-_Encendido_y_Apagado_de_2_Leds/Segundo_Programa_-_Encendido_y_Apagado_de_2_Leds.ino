/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la segunda programacion 
 * en Arduino, o sea el encendido y apagado de 2 leds por medio de 2 pines digital.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?v=1bRS145FOWY&t=1297s,
 * si te gusto no te olvides suscribirte, compartir y dejar tu Me Gusta 
 * para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Led = 8; //Declaramos la variable "Led" en el pin 8 digital
int Led2 = 9; //Declaramos la variable "Led2" en el pin 9 digital

void setup() { //Configuracion de los Pines y Comunicacion Serial
  pinMode(Led, OUTPUT); //Declaramos el pin 8 como salida por medio de la varible
  pinMode(Led2, OUTPUT); //Declaramos el pin 9 como salida por medio de la varible
}

void loop() { //Codigo a escribir "Ciclo Repetitivo"
  digitalWrite(Led, HIGH);   //Declaramos el pin 8 en Estado Alto
  delay(100);                //Espera 3 seg.
  digitalWrite(Led2, LOW);   //Declaramos el pin 9 en Estado Bajo
  delay(100);                //Espera 3 seg.
  digitalWrite(Led, LOW);    //Declaramos el pin 8 en Estado Bajo
  delay(100);                //Espera 3 seg.
  digitalWrite(Led2, HIGH);  //Declaramos el pin 9 en Estado Alto
  delay(100);                //Espera 3 seg.
}
