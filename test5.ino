/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:46:12 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteButton button1;
LRemoteButton button2;
LRemoteLabel label3;

void setup()
{
  LRemote.setName("ericfen");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 4);
    label1.setPos(0, 0);
    label1.setText("手機遙控");
    label1.setSize(5, 1);
    label1.setColor(RC_YELLOW);
    LRemote.addControl(label1);

    button1.setPos(0, 1);
    button1.setText("開");
    button1.setSize(5, 1);
    button1.setColor(RC_ORANGE);
    LRemote.addControl(button1);

    button2.setPos(0, 2);
    button2.setText("關");
    button2.setSize(5, 1);
    button2.setColor(RC_BLUE);
    LRemote.addControl(button2);

    label3.setPos(0, 3);
    label3.setText("唐進豐製作");
    label3.setSize(5, 1);
    label3.setColor(RC_GREEN);
    LRemote.addControl(label3);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.getValue() == 1 && button2.getValue() == 1) {
    digitalWrite(LED_BUILTIN, HIGH);

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(100);
}