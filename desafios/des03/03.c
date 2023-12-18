#include <stdio.h>

int main()
{
    int num1;
    printf("Digite um valor: ");
    scanf("%i", &num1);

    int num2;
    printf("Digite ou valor: ");
    scanf("%i", &num2);

    printf("\nA soma entre %i + %i e igual a %d", num1, num2, num1 + num2);
}
