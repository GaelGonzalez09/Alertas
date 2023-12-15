#include <SD.h>
#include <TMRpcm.h>

#define SD_ChipSelectPin 4
#define speakerPin 
#define buttonPin1 2
#define buttonPin2 3
#define buttonPin3 6
#define buttonPin4 5

TMRpcm tmrpcm;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  tmrpcm.speakerPin /* = speakerPin;*/
  if(!SD.begin (SD_ChipSelectPin)) {
    Serial.println("Error: No se pudo inicializar la tarjeta SD.");
    return;
  }
  tmrpcm.play("1.wav");
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) {
    tmrpcm.play("1.wav");
    delay(1000);
  }
  if (digitalRead(buttonPin2) == LOW) {
    tmrpcm.play("2.wav");
    delay(1000);
  }
  if (digitalRead(buttonPin3) == LOW) {
    tmrpcm.play("3.wav");
    delay(1000);
  }
  if (digitalRead(buttonPin4) == LOW) {
    tmrpcm.play("4.wav");
    delay(1000);
  }
}