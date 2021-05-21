#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11); // RX | TX
char val=-1;//carattere inviato da applicazione android per modificare stato LED

void setup()
{
  pinMode(3,OUTPUT);
  //Impostiamo il baude Rate
  Serial.begin(9600);
  bt.begin(9600);  
  Serial.println("Disponibile per la connessione");
 
}
 
void loop()
{
 
  //Ci manteniamo in ascolto continuo di dati provenienti dal modulo bluetooth
  if (bt.available()){
    val=bt.read();
    if (val=='1'){ //Accendo il LED
      digitalWrite(3,HIGH);
      //Invio tramite BT la stringa che comunica l'accensione del LED
      bt.println("Stato LED: Acceso");
    }
    else if (val=='0'){
      digitalWrite(3,LOW); //Spengo il LED
      //Invio tramite BT la stringa che comunica lo spegnimento del LED
      bt.println("Stato LED: Spento");
    }
    
    Serial.println("Stato LED: "+val);
    
  }
    
    
    
  
  
}
