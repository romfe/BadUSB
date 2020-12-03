
#include "Keyboard.h"
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
  
}

void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.print("texto");
  Keyboard.end();

}

void loop() {
  // não iremos usar

}
