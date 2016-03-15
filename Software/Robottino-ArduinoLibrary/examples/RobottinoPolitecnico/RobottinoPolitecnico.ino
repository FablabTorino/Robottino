#include "Robottino.h"

Robottino Peppino;

void setup() {
  Peppino.begin();
}

void loop() {
  Peppino.beep(250);
  Peppino.leggiDistanza(); 
  
  if (oggettoVicino()) { 
    Peppino.cominciaAContare();
    while ( secondiTrascorsiMinoriDi (5) ) {
      Peppino.naso(blu);
      //Peppino.espressione(felice); 
      //Peppino.ruota(impazzito); 
    }
  }
  
  else {
    Peppino.naso(verde);
    //Peppino.espressione(neutra); 
    //Peppino.ruota(lento);                             
  }
}