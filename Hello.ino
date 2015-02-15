
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int array[] = {2, 3, 4, 5, 6};


int selectedPin;
void setup() {
  Serial.begin(9600);
  
//  for(int i = 0; sizeof(array); i++){
//    pinMode(array, OUTPUT);
//  }

  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
        pinMode(ledPin5, OUTPUT);
            pinMode(ledPin6, OUTPUT);
}

void loop() {
  
 
  for(int i = sizeof(array) -1 ; i >= 0 ; i--){

     if(digitalRead(array[i]) == HIGH && array[i] >= selectedPin){
       selectedPin = array[i];
       Serial.print("page");
       Serial.println(array[i]);
       delay(1000);
       
     }
     
     if(digitalRead(array[i]) == LOW && array[i] == selectedPin){
        selectedPin = selectedPin - 1;
        
        if(selectedPin == 1){
         selectedPin = 0; 
        }
//        Serial.println(selectedPin);
//       delay(2000); 
     }

  }


}
