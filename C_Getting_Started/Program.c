#include <stdio.h> 

// Allgemeine Deklaratioben
#include "Common.h"

void main()
{
    structs();
}

void main_mit_zeiger()
{
    int x = 10;

    printf("x: %d\n", x);

    malZwei(x);
    
    printf("x: %d\n", x);

    malZweiBesser(& x);

    printf("x: %d\n", x);

}

void main_unterprogramm_mit_ergebnis()
{
    int x = 5;
    int y = 6;

    int ergebnis;

    ergebnis = summe(x, y);
    printf("Ergebnis: %d\n", ergebnis);

    ergebnis = summe(2 * x, 2 * y);
    printf("Ergebnis: %d\n", ergebnis);
}


void main_unterprogramm_ohne_ergebnis()
{
    int n = 5;

    printMe(5);  // Parameter
    //printf("Bin hier\n");
    // printf("g_counter: %d\n", g_counter);

    printMe(10);
}

void main_do_while()
{
    int i = 20;

    do
    {
        printf("i: %d\n", i);

        i = i + 1;

    } while (i < 10);

    printf("Fertig.\n");
}



void main_while()
{
    int i = 20;

    while ( i < 10 )
    {
        printf("i: %d\n", i);

        i = i + 1;
    }

    printf("Fertig.\n");
}







void main_erste_schritte()
{
    // Deklaration // Declaration
    int a = 1;
    int b = 2;
    int c = 0;   // Vorbelegung

    short s = 123;

    // Anweisung // Statement
    c = a + b;

    printf("Hallo Seminar : )");

    printf("\na: %d - b: %d - c: %d\n", a, b, c);
}

void main_if()
{
    int a = 1;
    int b = 2;

    int c = 11;
    int d = 10;

    // Vergleich // Abfragen einer Bedingung

    if ( ! (a < b && c < d) )
    {
        printf("a kleiner b");
        printf("\n");
    }
    else
    {
        printf("a NICHT kleiner b");
        printf("\n");
    }

    // Ich würde diese kompakte Schreibweise erst mal nicht verwenden
    if (a > b)
        printf("a kleiner b\n");
    else
    {
        printf("a NICHT kleiner b\n"); 
        printf("Tue das hier\n");
    }

    // ==================================

    a = 13;  // Zuweisung
    b = 10;

    if (a == 10) {
        printf("a kleiner b\n");
    }
    else if (a == 11)    // Gleichheit
    {
        printf("a gleich b\n");
    }
    else if (a == 12)    // Gleichheit
    {
        printf("a gleich b\n");
    }
    else // a > b
    {
        printf("sonstige\n");
    }

    printf("Fertig.\n");
}



