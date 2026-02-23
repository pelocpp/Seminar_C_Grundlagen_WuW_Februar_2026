#include <stdio.h> 

// globale Variable:
/*static*/ int g_counter = 123;

void tueWas()
{
    printf("g_counter: %d", g_counter);
}

// Unterprogramm

void printMe(int wieOft) // Stellvertreter
{
    int i = 0;

    while (i < wieOft) {
        printf("hallo seminar\n");
        ++ i; // 1 auf i dazuzählen
    }
    printf("\n");
}

//=======================================
// Unterprogramm: Variante mit Ergebnis


int summe (int a, int b)  // Stellvertreter a und b
{
    int result;

    result = a + b;

    return result;
}

