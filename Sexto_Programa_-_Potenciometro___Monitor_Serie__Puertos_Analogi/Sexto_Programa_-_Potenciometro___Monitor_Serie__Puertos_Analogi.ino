/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la sexta programacion 
 * en Arduino, o sea Potenciometro + Monitor Serie por Puertos Analogicos.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?=6326KxXUgR8,
 * Si te gusto el video no te olvides suscribirte,
 * compartir y dejar tu Me Gusta para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Pote = 0; //Declaramos la variable "Pote" con un valor de 0

void setup() { //Configuracion de los Pines o Comunicacion Serial y Sensores
  Serial.begin(9600);   //Establecemos la comunicacion con el Monitor Serie a 9600 baudios.
}

void loop() {  //Codigo a escribir "Ciclo Repetitivo"
  Pote = analogRead(A0); //Leer el puerto analogico A0 por medio de la funcion "analogRead".
  Serial.println(Pote);  //Se imprime en el monitor los valores obtenidos por el potenciometro.
  delay(200);            //Se declara un retardo de 200 ms para obtener una mayor visibilidad de datos.
}
