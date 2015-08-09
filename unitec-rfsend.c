#include <wiringPi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pin = 0;
int i, h;

void sendBit(int bit) {
  if(bit == 1) {
    //printf("1 Sending long.\n");
    digitalWrite(pin, HIGH);
    delayMicroseconds(975);
    digitalWrite(pin, LOW);
    delayMicroseconds(475);
  }

  if(bit == 0) {
    //printf("0 Sending short.\n");
    digitalWrite(pin, HIGH);
    delayMicroseconds(475);
    digitalWrite(pin, LOW);
    delayMicroseconds(975);
  }
}

void pulse(char codeString[], int amount) {
  for (h = 0; h < amount; h++) {
    for (i = 0; i < strlen(codeString); i++){
      char b = codeString[i];
      if(b != *"1" && b != *"0") {
        //printf("Skipping character \"%c\"\n", b);
        continue;
      }
      int bit = b - '0';
      sendBit(bit);
    }
    delayMicroseconds(1300);
  }
  //delayMicroseconds(2950);
}

int main (int argc, char **argv)
{
  wiringPiSetup();

  pinMode (pin, OUTPUT);
  digitalWrite(pin, LOW);
  pulse(argv[1], 10);




  return 0;
}