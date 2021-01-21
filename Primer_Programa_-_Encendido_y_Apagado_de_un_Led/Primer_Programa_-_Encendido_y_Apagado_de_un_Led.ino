/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la primera programacion 
 * en Arduino, o sea el encendido y apagado de un led por medio de un pin digital.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://youtu.be/1bRS145FOWY,
 * si te gusto no te olvides suscribirte, compartir y dejar tu Me Gusta 
 * para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int LedRojo = 8; //Declaramos la variable "LedRojo" en el pin 8 digital

void setup() { //Configuracion de los Pines o Comunicacion Serial y Sensores
pinMode(LedRojo, OUTPUT); //Declaramos el pin 8 como Salida por medio de la variable
}

void loop() {  //Codigo a escribir "Ciclo Repetitivo"
digitalWrite(LedRojo, HIGH);  //Declaramos el pin 8 en Estado Alto
delay(10);                  //Espera de 3 seg.
digitalWrite(LedRojo, LOW);   //Declaramos el pin 8 en Estado Bajo
delay(1000);                  //Espera de 3 seg.
}
