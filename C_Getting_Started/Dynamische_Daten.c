#include  <stdio.h>   // printf
#include  <stdlib.h>  // malloc


void dynamic_01()
{
    // eine int Variable dynamisch anlegen

    // Grundeineit des Speichers: Bytes

    int n = 123;
    
    int numBytes = sizeof(int);  // wahrscheinlich 4

    int* ip = malloc(numBytes);

    if (ip != NULL)
    {
        // einen Wert schreiben
        *ip = 123;

        // lesen
        printf("Am Heap: %d\n", *ip);

        free(ip);
    }

}


void dynamic()
{
    dynamic_01();
}
