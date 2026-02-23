#pragma once

// Deklaration wiederholen
extern int g_counter;

// ist okay, aber problematisch,
// wenn printMe in vielen anderen Dateien verwendet wird
extern void printMe(int wieOft);
extern int summe(int a, int b);
extern void wasIstEinZeiger();
extern void malZwei(int wert);
extern void dynamic();
extern void structs();
