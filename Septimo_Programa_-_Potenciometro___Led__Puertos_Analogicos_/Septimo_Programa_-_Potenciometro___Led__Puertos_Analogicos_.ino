/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la septima programacion 
 * en Arduino, o sea Potenciometro + Led por Puertos Analogicos.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?v=6326KxXUgR8,
 * Si te gusto el video no te olvides suscribirte,
 * compartir y dejar tu Me Gusta para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Pote = 0;   //Declaramos la variable "Pote" con un valor de 0.
int Led = 5;    //Declaramos la variable "Led" en el pin 5 digital.
int Brillo = 0; //Difinimos la variable "Brillo" con un valor de 0.

void setup() { //Configuracion de los Pines o Comunicacion Serial y Sensores
  pinMode(Led, OUTPUT); //Declaramos el pin 5 como salida por medio de su variable.
}

void loop() {  //Codigo a escribir "Ciclo Repetitivo"
  Pote = analogRead(A0);    //Leer el puerto analogico A0 por medio de la funcion "analogRead".
  Brillo = Pote / 4;        //Se divide por 4 ya que la funcion AnalogWrite trabaja con valores entre 0 a 255.
  analogWrite(Led, Brillo); //Con la Funcion "analogWrite" podemos asociar los valores obtenidos por la varible "Brillo". 
}
