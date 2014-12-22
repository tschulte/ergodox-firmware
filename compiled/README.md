Dieses Verzeichnis enthält den Teensy-Firmware-Loader und die kompilierte version des letzten RELEASE für neo2--sasu Layout.

Legende:
========

RH 	= rechte Hand
LH 	= linke Hand
R1.5= Reihe 1, Taste 5
SH	= Shift
mod4= Neo-Umschalter Mod4

Beispiele:
----------
	RH, R3.3 = r (kleiner Buchstabe "r")
	RH, SH, R3.3 = R (großer Buchstabe "R")

	LH, R4.3 = ö
	LH, SH, R4.3 = Ö


Changelog
=========

v. 0.2.0
 - Verzeichnis-Referenz in main.h angepasst, so dass Verz. "keybord" nicht oberhalb von src liegen muss
 - Verzeichnis "compiled" hinzugefuegt, das Teensy und vorkompilierte Firmware enthaelt
 - LH, R3.1 = CTRL_L
 - RH, R5.1 = mod4  (print und app nach rechts eingerückt)
 - RH, mod3, R1.3 = €
 - LH, mod4, R4.4 = ESC
 - LH, mod4, R4.5 = Insert

v. 0.1.0
initalisierung von neo2--sasu Tastaturlayout