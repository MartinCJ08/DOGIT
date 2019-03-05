byte bufer[4];
byte header;
int len;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    header = Serial.read();  
    if(header == 126){
      Serial.println("Se leyo correctamente la cabecera! inicia proceso de leer trama");
      len = Serial.read();
      Serial.println(len);
      Serial.readBytes(bufer,len);  
      
    }  

  }

  delay(500);

}
/**
 * Debe devolver un float con la latitud
 */
void getLatitude(){
  Serial.println("TODO: Devolver latitud");
  }

/**
 * Debe devolver un float con la altitud
 */
void getAltitude(){
  Serial.println("TODO: Devolver  altitud");
  }

/**
 * Debe devolver un arreglo float donde el indice 0 - latitud 1 -altitud
 */
void getCoord(){
  Serial.println("TODO: Devolver coordenadas");
  }

/**
 * Devuelve si el componente esta en el area
 */
void getStatus(){
  Serial.println("TODO: Devolver status");
  }

/**
 * Define un area segura a partir de un radio 
 */
void defineArea(){
  Serial.println("TODO: Deifnir area");}

/**
 * Debe devolver un error
 */
void getError(){
  
  }
