#define SDA 18



void setup() {
  //pinmode izabrati koji pin cemo koristiti za prenos 
  //nez dal ce moci sda ili neki drugi gpio
  pinMode(SDA, OUTPUT);
  
  Serial.begin(9600);

}

char text[500 ];
char input_from_monitor;
int j = 0;
int k = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    input_from_monitor = Serial.read();
    Serial.print(input_from_monitor);
    if (input_from_monitor == '\n')
    {
      k = j;
      text[j] = '\n';
      j++;
   
    }
    if (input_from_monitor == ' ')
    {
      k = j;
      text[j] = ' ';
      j++;
   
    }
    if (input_from_monitor == 'A' || input_from_monitor == 'a')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'B' || input_from_monitor == 'b')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'C' || input_from_monitor == 'c')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;

    }
    if (input_from_monitor == 'D' || input_from_monitor == 'd')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'E' || input_from_monitor == 'e')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'F' || input_from_monitor == 'f')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'G' || input_from_monitor == 'g')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'H' || input_from_monitor == 'h')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'I' || input_from_monitor == 'i')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'J' || input_from_monitor == 'j')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'K' || input_from_monitor == 'k')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'L' || input_from_monitor == 'l')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'M' || input_from_monitor == 'm')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'N' || input_from_monitor == 'n')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'O' || input_from_monitor == 'o')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'P' || input_from_monitor == 'p')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'Q' || input_from_monitor == 'q')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'R' || input_from_monitor == 'r')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'S' || input_from_monitor == 's')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'T' || input_from_monitor == 't')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'U' || input_from_monitor == 'u')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'V' || input_from_monitor == 'v')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'W' || input_from_monitor == 'w')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'X' || input_from_monitor == 'x')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'Y' || input_from_monitor == 'y')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == 'Z' || input_from_monitor == 'z')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '1')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    
    if (input_from_monitor == '2')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '3')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '4')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '5')
    {
      k = j;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '6')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '7')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }if (input_from_monitor == '8')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    if (input_from_monitor == '9')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '.';
      j++;
      text[j] = ' ';
      j++;
    }
    
    if (input_from_monitor == '0')
    {
      k = j;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = '-';
      j++;
      text[j] = ' ';
      j++;
    }
    

    
    for (int l = k; l < j; l++)
    {
      if(text[l] == '.'){
      digitalWrite(SDA, HIGH);
      delay(1);
      //e sad ovo je ona pauza od 1ms izmedju karaktera ako moze ovako
      digitalWrite(SDA, LOW);
      delay(100);
      Serial.print(text[l]);
      }
      else if (text[l] == '-')
      {
        digitalWrite(SDA, HIGH);
        delay(3);
        digitalWrite(SDA, LOW);
        delay(100);
        Serial.print(text[l]);
      }
      else if (text[l] == ' ')
      {
        digitalWrite(SDA, HIGH);
        delay(5);
        digitalWrite(SDA, LOW);
        delay(100);
        Serial.print(text[l]);
      }
      else if (text[l] == '\n')
      {
        digitalWrite(SDA, HIGH);
        delay(7);
        digitalWrite(SDA, LOW);
        delay(100);
        Serial.print(text[l]);
      }
      else 
      {
        digitalWrite(SDA, LOW);
        Serial.print("Ove karaktere ne poznajemo");
      }
    }
  }
}
