

void setup() {
  Serial.begin(115200);
  Serial.println();

  
  delay(10000);

 
}
int counter = 0;
void loop() { 
  counter++;
  Serial.print("Counter:");
  Serial.println(counter);
  delay(5000);
  }
