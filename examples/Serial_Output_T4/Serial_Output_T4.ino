/* FreqCount - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqCount.html
 *
 * This example code is in the public domain.
 *
 * For the Teensy 4.0 pin 14 is used to measure the freq
 * FreqCount.begin time is in microseconds vs milliseconds
 * for other boards.
 */
#include <FreqCount.h>

void setup() {
  Serial.begin(57600);
  
  delay(2000);
  analogWriteFrequency(11, 123456);  // test jumper 11 to 25
  analogWrite(11, 128);
  
  FreqCount.begin(1000000);  //Time in microseconds
}

void loop() {
  if (FreqCount.available()) {
    unsigned long count = FreqCount.read();
    Serial.println(count);
  }
}

