#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("Digite um numero: ");
    scanf("%i", &num);

    for ( i = 0; i <= 10; i++)
    {
        printf("%i x %i = %d\n", i, num, i * num);
    }
}
