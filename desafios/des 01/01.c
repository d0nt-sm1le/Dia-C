#include <stdio.h>


int main()
{
/*
    Escreva um programa que imprima todos os n�meros pares entre 2 e 50.
    Para saber se o n�mero � par
*/

    int i;

    for ( i = 0; i < 51; i++)
    {
        (i % 2 == 0 ) ? printf("%i\n", i) : printf("");
    }
    return 0;

}
