# Assistente_Vocale_Bluetooth_Arduino_UNO
Realizzazione di un'assistente vocale con modulo Bluetooth HC-05 e Arduino Uno, utilizzando un'app creata con MIT App Inventor

Dopo essersi collegati con un device mobile al modulo Bluetooth HC-05, si va ad accendere o spegnere un LED tramite un comando vocale, sfruttando l'assistente vocale del device stesso.

Nel file .ino, potrai trovare il codice da caricare sulla scheda Arduino.

Nel file .apk troverai il codice a blocchi per l'app. Questo file dovrà essere caricato sul device e dopo averlo aperto, partirà la procedura di installazione dell'app.

Dopo aver installato l'app, collega la scheda Arduino con il circuito mostrato in figura e al computer dove hai il file .ino.

Carica il file sulla scheda Arduino.

Se i collegamenti sono stati fatti bene, vedrai che un led del modulo HC-05 inizierà a lampeggiare.

Collega il device dove hai scaricato l'app al modulo HC-05 tramite il Bluetooth: se è la prima volta che ti colleghi, ti verrà richiesta una password. Prova con 1234 o 0000.

A questo punto, apri l'app e clicca sul bottone Cerca Dispositivi. Ti si arpirà una lista dove potrai trovare il modulo HC-05. Cliccaci e a quel punto, ti comparirà il pulsante Parla. Se ci clicchi, ti si attiverà l'assistente vocalde del device. Pronuncia frasi che contengono le parole: "Arduino" e "Accendi". Vedrai che dopo qualche secondo il LED si accenderà

Prova poi a spegnerlo, pronunciando delle frasi che contengono "Arduino" e "Spegni".

