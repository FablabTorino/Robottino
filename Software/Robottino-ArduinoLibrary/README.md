
#ROBOTTINO - testa rotante interattiva

[**WWW.ROBOTTINO.CC**](http://robottino.cc/test/)

![Alt text](http://robottino.cc/test/img/robottino-stardust-600x600.jpg "Robottino")



##Il robot
**Attuatori**

- TESTA ROTANTE (motore servo)
- SUONI (piezo)
- NASO (Led RGB)
- BOCCA (display)

**Sensori**

- SENSORI DI LUCE (LDR)
- SENSORE DI DISTANZA (Ultrasonic Distance Sensor)

##Installazione

 1. Installa l'ultima versione dell'**Arduino IDE**. Scarica Arduino da qui: [www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)
 2. Installa la **libreria u8glib** necessaria per la gestione del display.
In Arduino:*Sketch > Include Library > Manage Libraries...
Cerca e installa la libreria denominata "u8glib"
 3. Installa la **libreria Robottino**:
 Scarica lo .zip da qui [Robottino-ArduinoLibrary.zip](https://github.com/FablabTorino/Robottino/blob/master/Software/Robottino-ArduinoLibrary/Robottino-ArduinoLibrary.zip).		
 In Arduino: *Sketch > Include Library > Add .ZIP Library*


##Hello World
Questo programma esemplificativo mostra le funzioni base del Robottino

```Arduino
#include "Robottino.h"
Robottino Peppino;
void setup() {
  	Peppino.begin();
	}
void loop() {
  Peppino.naso(arcobaleno);
}
```

#Reference

[github.com/FablabTorino/Robottino/wiki/Reference](https://github.com/FablabTorino/Robottino/wiki/Reference)

##Pinout
Componente | PIN
------------ | -------------
Buzzer | 13
Led Red | 11
Led Green | 10
Led Blue | 9
Servo Motor | 8
Ultrasonic Trigger | 7
Ultrasonic Echo | 4
Right LDR | A0
Left LDR | A1


## Credits
Hanno contribuito al software:

- Carmine Paolino - [github.com/cancelliere](https://github.com/cancelliere)
- Giovanni Bindi - [github.com/tongatron](https://github.com/tongatron)
- Fedele Tagarelli - [https://github.com/tagaf](https://github.com/tagaf)

## Licenza
[Creative Commons: Attribution-ShareAlike 4.0 International](http://creativecommons.org/licenses/by-sa/4.0/)

***
Powered by [**Tongatron**](http://tongatron.it/)  
Hosted and developed in [**Fablab Torino**](http://fablabtorino.org/)
