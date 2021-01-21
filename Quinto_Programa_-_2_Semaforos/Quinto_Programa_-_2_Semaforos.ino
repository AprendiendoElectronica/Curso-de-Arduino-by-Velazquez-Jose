/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la quinta programacion 
 * en Arduino, o sea la Secuencia de dos Semaforo por medio de Pines Digitales.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?v=1KXDQJupO54,
 * Si te gusto el video no te olvides suscribirte,
 * compartir y dejar tu Me Gusta para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Rojo = 13;       //Se define la variable "Rojo" en el pin 13 digital
int Amarrillo = 12;  //Se define la variable "Amarillo" en el pin 12 digital
int Verde = 11;      //Se define la variable "Verde" en el pin 11 digital
int Rojo2 = 10;      //Se define la variable "Rojo2" en el pin 10 digital
int Amarrillo2 = 9;  //Se define la variable "Amarillo2" en el pin 9 digital
int Verde2 = 8;      //Se define la variable "Verde2" en el pin 8 digital

void setup() {  //Configuracion de los Pines o Comunicacion Serial y Sensores
pinMode(Rojo, OUTPUT);        //Se declara el pin 13 como Salida por medio de su variable
pinMode(Amarrillo, OUTPUT);   //Se declara el pin 12 como Salida por medio de su variable
pinMode(Verde, OUTPUT);       //Se declara el pin 11 como Salida por medio de su variable
pinMode(Rojo2, OUTPUT);       //Se declara el pin 10 como Salida por medio de su variable
pinMode(Amarrillo2, OUTPUT);  //Se declara el pin 9 como Salida por medio de su variable
pinMode(Verde2, OUTPUT);      //Se declara el pin 8 como Salida por medio de su variable
}

void loop() {    //Codigo a escribir "Ciclo Repetitivo"
/*
 * Subprograma son pequeños codigos que estan dentro de un programa
 * o sea cada pequeño codigo se cumple de forma aparte
 * Para crear un Subprograma es necesario colocar un nombre:
 * Por ej: 
 *        Semaforo();
 * Este nombre debe terminar con dos parentesis y un punta y coma (debe estar
 * en la seccion de "void loop").
 * Luego crear un void fuera de "void loop" y con el nombre que utilizamos 
 * Por ej:
 *       void Semaforo() {
 *       (Aqui se escribiria el pequeño codigo)
 *       }
 * Por ultimo ya podemos escribir dentro del subprograma
 */
Semaforo1();
Semaforo2();
Semaforo3();
Semaforo4();
Semaforo5();
Semaforo6();
Semaforo7();
Semaforo8();
Semaforo9();
}

void Semaforo1() { //Secuencia numero 1
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, HIGH);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, LOW);
delay(1000);
}

void Semaforo2() { //Secuencia numero 2
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, HIGH);
digitalWrite(Rojo2, LOW);
delay(1000);
}

void Semaforo3() { //Secuencia numero 3
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo4() { //Secuencia numero 4
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, HIGH);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo5() { //Secuencia numero 5
digitalWrite(Verde, HIGH);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, LOW);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo6() { //Secuencia numero 6
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, HIGH);
digitalWrite(Rojo, LOW);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo7() { //Secuencia numero 7
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo8() { //Secuencia numero 8
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, LOW);
digitalWrite(Amarrillo2, HIGH);
digitalWrite(Rojo2, HIGH);
delay(1000);
}

void Semaforo9() { //Secuencia numero 9
digitalWrite(Verde, LOW);
digitalWrite(Amarrillo, LOW);
digitalWrite(Rojo, HIGH);
digitalWrite(Verde2, HIGH);
digitalWrite(Amarrillo2, LOW);
digitalWrite(Rojo2, LOW);
delay(1000);
}
