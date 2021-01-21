/*
 * Hola a todos amigos de Youtube aqui les dejo el codigo de la cuarta programacion 
 * en Arduino, o sea la Secuencia de un Semaforo por medio de pines digitales.
 * Si todavia no viste el video te invito a que los veas por este
 * enlace: https://www.youtube.com/watch?v=1KXDQJupO54,
 * si te gusto no te olvides suscribirte, compartir y dejar tu Me Gusta 
 * para poder ir creciendo.
 * Recuerda que si tienes alguna duda sobre los videos que estoy subiendo 
 * puedes grabarte exponiendo tu duda, subilo a mi pagina de Facebook 
 * y en un proximo video te dare la respuesta.
 * Saludos.
 * Aprendiendo Electronica by Velazquez Jose
 */

int Rojo = 13;
int Amarrillo = 12;
int Verde = 11;

void setup() {
  pinMode(Rojo, OUTPUT);
  pinMode(Amarrillo, OUTPUT);
  pinMode(Verde, OUTPUT);
}

void loop() {
  //Semaforo en Verde
  digitalWrite(Verde, HIGH);
  digitalWrite(Amarrillo, LOW);
  digitalWrite(Rojo, LOW);
  delay(500);
  //Semaforo en Amarrillo
  digitalWrite(Verde, LOW);
  digitalWrite(Amarrillo, HIGH);
  digitalWrite(Rojo, LOW);
  delay(100);
  //Semaforo en Rojo
  digitalWrite(Verde, LOW);
  digitalWrite(Amarrillo, LOW);
  digitalWrite(Rojo, HIGH);
  delay(500);
  //Semaforo en Rojo Amarrillo
  digitalWrite(Verde, LOW);
  digitalWrite(Amarrillo, HIGH);
  digitalWrite(Rojo, HIGH);
  delay(100);
}
