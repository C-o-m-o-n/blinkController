/*
  Merged Blink Controller with Color Changing

  Examples using the character Blink Controller.
  Send letter 'b' to turn the LED on, 'q' to turn it off, 'l' to make it blink,
  'r' for red, 'g' for green, and 'b' for blue (for RGB LEDs).

  created 20 Sep 2023
  by Collins Omondi

  This example code is available on GitHub:
  https://github.com/C-o-m-o-n/blinkController
*/

const int ledPin = LED_BUILTIN; // Replace with your LED pin
const int redPin = 9;           // Red pin of the RGB LED
const int greenPin = 10;        // Green pin of the RGB LED
const int bluePin = 11;         // Blue pin of the RGB LED
bool ledState = LOW;
bool blinkMode = false;
unsigned long previousMillis = 0;
const long interval = 1000; // Blink interval in milliseconds

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.println("Hello, welcome to the Blink Controller!\n");
  Serial.println("Send 'b' to turn the LED on, 'q' to turn it off,");
  Serial.println("'l' to make it blink, 'r' for red, 'g' for green,");
  Serial.println("and 'b' for blue (for RGB LEDs).\n");
}

void loop() {
  if (Serial.available() > 0) {
    char thisChar = Serial.read();
    thisChar = toLowerCase(thisChar); // Convert to lowercase for case-insensitivity

    if (thisChar == 'b') {
      digitalWrite(ledPin, HIGH);
      ledState = HIGH;
      Serial.println("LED is ON.\n");
      blinkMode = false;
    } else if (thisChar == 'q') {
      digitalWrite(ledPin, LOW);
      ledState = LOW;
      Serial.println("LED is OFF.\n");
      blinkMode = false;
    } else if (thisChar == 'l') {
      Serial.println("LED is in BLINK mode.\n");
      blinkMode = true;
    } else if (thisChar == 'r') {
      setColor(255, 0, 0); // Set color to red (for RGB LEDs)
      blinkMode = false;
    } else if (thisChar == 'g') {
      setColor(0, 255, 0); // Set color to green (for RGB LEDs)
      blinkMode = false;
    } else if (thisChar == 'b') {
      setColor(0, 0, 255); // Set color to blue (for RGB LEDs)
      blinkMode = false;
    } else if (isAlphaNumeric(thisChar)) {
      Serial.println("Invalid command. Please read the instructions.\n");
    }

    if (isWhitespace(thisChar)) {
      Serial.println("You sent a whitespace character. Please read the instructions.\n");
    }
  }

  // Handle blinking with color changing
  if (blinkMode) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      // Toggle between red, green, and blue (for RGB LEDs)
      static int colorIndex = 0;
      if (colorIndex == 0) {
        setColor(255, 0, 0); // Red
      } else if (colorIndex == 1) {
        setColor(0, 255, 0); // Green
      } else {
        setColor(0, 0, 255); // Blue
      }
      colorIndex = (colorIndex + 1) % 3;
    }
  }
}

// Function to set the RGB LED color
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
