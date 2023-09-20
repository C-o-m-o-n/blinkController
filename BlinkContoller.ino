/*
  Blink Controller

  Examples using the character Blink Controller.
  Send letter 'b' to turn the led on and letter 'q' to turn it off.

  created 20 Sep 2023
  by Collins Omondi

  This example code is avilable on github

https://github.com/C-o-m-o-n/blinkController
*/

void setup(){
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
//  while (!Serial){
//    ;
//  }
  
  Serial.println("Hello, welcome to the blink contoller!\n\nsend letter 'b' to turn the led on and letter 'q' to turn it off \n");
  }
//}

void loop(){
  if (Serial.available() > 0){
    int thisChar = Serial.read();
    if (thisChar == 'b'){
      Serial.println("LED on!!:\n");
      digitalWrite(LED_BUILTIN, HIGH);
      //delay(2000);
      }
      else if(thisChar == 'q'){
        Serial.println("LED off!!:\n");
        digitalWrite(LED_BUILTIN, LOW);
        
        }
        
      if(isAlphaNumeric(thisChar) && thisChar != 'b' && thisChar != 'q' )
      {
          Serial.println("What you sent is alpha numeric...PLease read the instructions!!\n");
          }
      if (isWhitespace(thisChar)){
         Serial.println("You sent a white space...PLease read the instructions!!\n");
        }
    
    
    };
}
