#include "LED.h"
#include "PULSANTE.h"

LED ledVerde();
PULSANTE pulsanteVerde();
LED ledBlue();
PULSANTE pulsanteBlu();
LED ledYellow();
PULSANTE pulsanteYellow();
LED ledRed();
PULSANTE pulsanteRed();


void setup() {
  ledVerde.test();
  ledBlue.test();
  ledYellow.test();
  ledRed.test();
}

void loop() {
  if(pulsanteBlu.longPress()){
    ledBlue.inverti();
  }
}