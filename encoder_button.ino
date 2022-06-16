#define BUTTON 12
#define SDA 18
char input_word[100]="";
int i;
int pomoc=0;
int pomoc1=0;
int pomoc2=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(SDA, OUTPUT);
  Serial.begin(9600);

}
int b;
int pomocna=1;
void loop() {
 
  // put your main code here, to run repeatedly:
  //check_state_of_pin = digitalRead(SDA);
  
  b=digitalRead(BUTTON);
  
    
      if(b==0)
      {
        pomoc++;
        pomoc1=0;
        pomoc2=0;
      }
      else
      {
        pomoc1++;
      }
      
      if(b==1 && b!=pomocna && pomoc<10) 
    
    {
      input_word[i]='.';
      i++;
      digitalWrite(SDA, HIGH);
      delay(1);
      digitalWrite(SDA, LOW);
      pomoc=0;
      Serial.println(input_word);
    }else
    if(b==1 && b!=pomocna && pomoc<20)
    {
      input_word[i]='-';
      i++;
      digitalWrite(SDA, HIGH);
      delay(3);
      digitalWrite(SDA, LOW);
      pomoc=0;
      Serial.println(input_word);
    }else
    if(b==1 && b!=pomocna ) {
      
      input_word[i]=' ';
      i++;
      digitalWrite(SDA, HIGH);
      delay(7);
      digitalWrite(SDA, LOW);
      pomoc=0;
      Serial.println(input_word);
      
    }
    /*if(b==1 && b!=pomocna && pomoc>40) 
    {
      digitalWrite(SDA, HIGH);
      delay(7);
      
      digitalWrite(SDA, LOW);
      pomoc=0;
    }*/
    
    if(pomoc1>15 && pomoc2==0)
    {
      input_word[i]=' ';
      i++;
      digitalWrite(SDA, HIGH);
      delay(5);
      digitalWrite(SDA, LOW);
      pomoc2=1;
      Serial.println(input_word);
    }
    pomocna = digitalRead(BUTTON);
    
    delay(50);

}
