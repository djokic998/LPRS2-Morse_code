#define SDA 18
char input_word[500]="";
int i = 0;
int o=0;
int t=0;
int citac=0;
char rijec[30]="";
void setup() {
  // put your setup code here, to run once:
  pinMode(SDA, INPUT);
  Serial.begin(9600);

}

void konverzija()
{
  char pomoc[10]="          ";
  int a=0;
  int prolaz=0;
  while(input_word[o]!='0'){
    if(input_word[o]==' ')
    {
      rijec[t]=' ';
      t++;
      o++;
    }
  while(input_word[o]!=' ')
  {
    pomoc[a]=input_word[o];
    a++;
    o++;
  }
  o++;
  a=0;
    if(!strcmp(pomoc,".-        "))
{
  rijec[t]='a';
  t++;
}
if(!strcmp(pomoc,"-...      "))
{
  rijec[t]='b';
  t++;
}
if(!strcmp(pomoc,"-.-.      "))
{
  rijec[t]='c';
  t++;
}
if(!strcmp(pomoc,"-..       "))
{
  rijec[t]='d';
  t++;
}
if(!strcmp(pomoc,".         "))
{
  rijec[t]='e';
  t++;
}
if(!strcmp(pomoc,"..-.      "))
{
  rijec[t]='f';
  t++;
}
if(!strcmp(pomoc,"--.       "))
{
  rijec[t]='g';
  t++;
}
if(!strcmp(pomoc,"....      "))
{
  rijec[t]='h';
  t++;
}
if(!strcmp(pomoc,"..        "))
{
  rijec[t]='i';
  t++;
}
if(!strcmp(pomoc,".---      "))
{
  rijec[t]='j';
  t++;
}
if(!strcmp(pomoc,"-.-       "))
{
  rijec[t]='k';
  t++;
}
if(!strcmp(pomoc,".-..      "))
{
  rijec[t]='l';
  t++;
}
if(!strcmp(pomoc,"--        "))
{
  rijec[t]='m';
  t++;
}
if(!strcmp(pomoc,"-.        "))
{
  rijec[t]='n';
  t++;
}
if(!strcmp(pomoc,"---       "))
{
  rijec[t]='o';
  t++;
}
if(!strcmp(pomoc,".--.      "))
{
  rijec[t]='p';
  t++;
}
if(!strcmp(pomoc,"--.-      "))
{
  rijec[t]='q';
  t++;
}
if(!strcmp(pomoc,".-.       "))
{
  rijec[t]='r';
  t++;
}
if(!strcmp(pomoc,"...       "))
{
  rijec[t]='s';
  t++;
}
if(!strcmp(pomoc,"-         "))
{
  rijec[t]='t';
  t++;
}
if(!strcmp(pomoc,"..-       "))
{
  rijec[t]='u';
  t++;
}
if(!strcmp(pomoc,"...-      "))
{
  rijec[t]='v';
  t++;
}
if(!strcmp(pomoc,".--       "))
{
  rijec[t]='w';
  t++;
}
if(!strcmp(pomoc,"-..-      "))
{
  rijec[t]='x';
  t++;
}
if(!strcmp(pomoc,"-.--      "))
{
  rijec[t]='y';
  t++;
}
if(!strcmp(pomoc,"--..      "))
{
  rijec[t]='z';
  t++;
}
if(!strcmp(pomoc,".----     "))
{
  rijec[t]='1';
  t++;
}
if(!strcmp(pomoc,"..---     "))
{
  rijec[t]='2';
  t++;
}
if(!strcmp(pomoc,"...--     "))
{
  rijec[t]='3';
  t++;
}
if(!strcmp(pomoc,"....-     "))
{
  rijec[t]='4';
  t++;
}
if(!strcmp(pomoc,".....     "))
{
  rijec[t]='5';
  t++;
}
if(!strcmp(pomoc,"-....     "))
{
  rijec[t]='6';
  t++;
}
if(!strcmp(pomoc,"--...     "))
{
  rijec[t]='7';
  t++;
}
if(!strcmp(pomoc,"---..     "))
{
  rijec[t]='8';
  t++;
}
if(!strcmp(pomoc,"----.     "))
{
  rijec[t]='9';
  t++;
}
if(!strcmp(pomoc,"-----     "))
{
  rijec[t]='0';
  t++;
}
  for(int i=0;i<10;i++)pomoc[i]=' ';
}
Serial.println(rijec);
}
void loop() {
  // put your main code here, to run repeatedly:
  //check_state_of_pin = digitalRead(SDA);
  citac=digitalRead(SDA);
int pomocna=0;
  if( citac== 1){
    delay(2);
    if(digitalRead(SDA)== LOW) 
    {
      input_word[i]='.';
      i++;
      pomocna=1;
      //Serial.println(input_word);
    }else delay(2);
    if(digitalRead(SDA)==LOW && pomocna==0)
    {
      input_word[i]='-';
      i++;
      pomocna=1;
      //Serial.println(input_word);
    }
    else delay(2);
    if(digitalRead(SDA)==LOW && pomocna==0) {
      
      input_word[i]=' ';
      i++;
      pomocna=1;
     // Serial.println(input_word);
      
    }
    
    else if(pomocna==0)
    {
      
      input_word[i]='0';
      //Serial.println(input_word);
      delay(300);
      konverzija();
    }
    
    
  }

    
    
  

}
