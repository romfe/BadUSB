//#include <HID.h>
#include <Keyboard.h>
void setup() {
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(500); // the processor need time to register key press
  Keyboard.press("r");
  Keyboard.releaseAll();
  delay(500); // approximate time needed to process our intruction
  Keyboard.write("cmd");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {
  // vazio
}
