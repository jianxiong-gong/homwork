#define LED_PIN 13
const int dot=200, dash=600, gap=200, endGap=2000;
int sos[]={0,0,0,1,1,1,0,0,0};
int i=0; unsigned long t=0; bool on=0;
void setup(){pinMode(LED_PIN,OUTPUT);t=millis();}
void loop(){
  unsigned long now=millis();
  int dur = (sos[i]==0) ? dot : dash;
  if(on){
    if(now-t>=dur){on=0;t=now;digitalWrite(LED_PIN,0);}
  }else{
    if(now-t>=gap){
      i++;
      if(i>=9){i=0;t=now+endGap;}
      else{on=1;t=now;digitalWrite(LED_PIN,1);}
    }
  }
}