/*
   Hola a todos amigos de Youtube aqui les dejo el codigo de la octava programacion
   en Arduino, o sea la explicacion del Monitor Serie sobre la diferencia que
   existe entre "print" o "println".
   Si todavia no viste el video te invito a que los veas por este
   enlace: https://www.youtube.com/watch?v=auV0c6kRI30,
   si te gusto no te olvides suscribirte, compartir y dejar tu Me Gusta
   para poder ir creciendo.
   Recuerda que si tienes alguna duda sobre los videos que estoy subiendo
   puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook
   y en un proximo video te dare la respuesta.
   Saludos.
   Aprendiendo Electronica by Velazquez Jose
*/

int R = 340; //Se declara la variable "R" con un valor de 340.

void setup() { //Configuracion de los Pines o Comunicacion Serial y Sensores.
  Serial.begin(9600); //Establecemos la comunicacion con el Monitor Serie a 9600 baudios.
}

void loop() {  //Codigo a escribir "Ciclo Repetitivo".
  /*
     Tanto la funcion "print" o "println" son para imprimir valores en el
     Monitor Serie, pero la diferencia es saberlo utilizar.
     La funcion "print" es para iniciar el texto que se desea mostrar.
     Y la funcion "println" es para finalizar el texto.
     Como podemos observar en el video y en el siguiente codigo.
  */
  Serial.print("Este es el texto: "); //Se imprimie en el Monitor Serie "Este es el texto".
  Serial.println(R); //Se imprime en el Monitor Serie el valor de la variable "R".
}
