#include <stdio.h>

void malZwei(int wert)
{
    int result = wert;

    result = 2 * result;

    wert = result;
}

void malZweiBesser(int* wertAdresse)
{
    int result = * wertAdresse;  // indirekt lesen

    result = 2 * result;

    * wertAdresse = result;  // indirekt schreiben
}



void wasIstEinZeiger()
{
    int n = 123;

    // Adressen zu betrachten
    int* adresse = & n;    // adresse von !!!!!!!!!!!!!!!

    // einen anderen Wert an DIESE Adresse schreiben
    // 20 dezimal = 14 Hexa // OHNE Variable n

    printf("n: %d\n", n);

    // n = 20;
    * adresse = 20;  // Indirekter Zugriff 

    printf("n: %d\n", n);
}