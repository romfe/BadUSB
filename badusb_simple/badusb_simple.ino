#include <HID.h>
#include <Keyboard.h>
void setup() {
  delay(400);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(200);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {
  // vazio / empty
}
