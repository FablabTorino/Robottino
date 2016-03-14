#ROBOTTINO - reference

Robottino Library reference.  
La reference del linguaggio Arduino la trovi qui: [arduino.cc/en/Reference/HomePage](https://www.arduino.cc/en/Reference/HomePage)

##Testa rotante
###Rotazioni predefinite
Gestione della rotazione della testa.

Funzioni:

- `Robottino.ruota(lento);`
- `Robottino.ruota(veloce);`
- `Robottino.ruota(impazzito);`

>**NOTA** Le funzioni Robottino.ruota() possono creare problemi con il delay.

###Posizionamento della testa
Posiziona la testa ad un angolo specificato nell'argomento.

Funzione:

`Robottino.posiziona(gradi);`

Esempio:

`Robottino.ruota(90);`
	
##Naso

###Naso Colorato
Accende il Led RGB del naso con il colore specificato nell'argomento.

Funzioni:
  
- `Robottino.naso();`
- `Robottino.nasoLampeggiante(colore,intervallo);`


####Argomenti

- nero
- bianco
- rosso
- arancio
- giallo
- verde
- blu
- indaco
- viola
- arcobaleno

Esempio:

`Robottino.naso(verde);`
`Robottino.nasoLampeggiante(verde,150);`

> **NOTA** Le funzioni `Robottino.naso(arcobaleno)` e `Robottino.nasoLampeggiante(colore,intervallo);` possono creare problemi con il delay.

	
	
##Suoni
###Beep
Permette di emettere suoni "beep" tramite il buzzer e di silenziarlo.

Funzione:

`Robottino.beep();`

Argomenti:

- silenzio
- allarme

Esempio:

`Robottino.beep(allarme);`

###Suona "Super Mario"
Suona il motivo musicale di Super Mario.
Thanks to [Promugs on Instructables](http://www.instructables.com/id/Play-Custom-Melodies-on-Arduino/?ALLSTEPS).

Funzione:

`Robottino.superMario();`

	
##Bocca display
###Espressioni
Disegna espressioni facciali e scrive stringhe di testo sul display posto nella bocca del Robottino.

Funzione:

`Robottino.espressione();`

Argomenti:

 - vuota
 - neutra
 - felice
 - spaventato
 - fablabLogo
 - robottinoLogo

Esempio:

`Robottino.espressione(felice);`
	
###Mostra nel display i valori dei sensori
I valori letti dai sensori vengono rappresentati sul display, su una scala da 0 a 10.

Funzioni:

- `Robottino.mostra(antenne);`
- `Robottino.mostra(occhi);`


> **NOTA** La funzioni `Robottino.mostra(antenne)` e `Robottino.mostra(occhi)` possono creare problemi con il delay.
			
##Sensori di luce
xxxxxxxxxxx

Funzione:

`Robottino.leggiLuce(antenne);`

	
##Sensore di distanza
xxxxxxxxxxx

Funzione:

`Robottino.leggiDistanza(occhi);`
