int veri;
int kirmiziPin = 8;
int yesilPin = 12;
int maviPin = 13;




void setup() {
  Serial.begin(9600);
  pinMode(kirmiziPin,OUTPUT);
  pinMode(yesilPin,OUTPUT);
  pinMode(maviPin,OUTPUT);


}

void loop() {
  if(Serial.available()){
    veri = Serial.read();
  }
  if(veri == 'k'){
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,HIGH);
    }
    else if(veri == 'y'){
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,LOW);
    }
     else if(veri == 'm'){
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,LOW);
    }
    else if(veri == 's'){
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,LOW);
    }
    else{
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,LOW);
    }
    
}
