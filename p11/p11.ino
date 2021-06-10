int m = 10 ;

void setup() {


pinMode(m,OUTPUT);


  
}


void loop(){

int x= analogRead(A0) ;
 
int y= map(x,0,1023,0,255) ;

analogWrite(m,y) ;
 
}
