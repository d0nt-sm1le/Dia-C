#include <stdio.h>

int main()
{
    int num1;
    int i;

    printf("Escreva um numero de inteiro: ");
    scanf("%i", &num1);

    for ( i = 1; i < 11; i++)
    {
        printf("\n%i x %i = %d", num1, i, num1 * i);
    }
    
}
