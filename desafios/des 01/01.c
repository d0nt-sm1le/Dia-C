#include <stdio.h>


int main()
{
/*
    Escreva um programa que imprima todos os números pares entre 2 e 50.
    Para saber se o número é par
*/

    int i;

    for ( i = 0; i < 51; i++)
    {
        (i % 2 == 0 ) ? printf("%i\n", i) : printf("");
    }
    return 0;

}
