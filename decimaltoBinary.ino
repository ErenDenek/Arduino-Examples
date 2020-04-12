void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int num = 100000;
  
  uint8_t bitsCount = sizeof( num ) * 8;
  char str[ bitsCount + 1 ];
  itoa( num, str, 2 );
  
  Serial.println( str );
}
