#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1;
    int x;
    int y;
    float x1;
    float y1;

    printf("Bem vindo ao minha calculadora de crack\n");
    printf("Venha conferir qual � o peso do seu produto\n");
    printf("Qual a op��o que voc� deseja conferir?\n\n");

    printf("Adi��o[1]\nSubtra��o[2]\nDivisao[3]\nMultiplica��o[4]\n\n");

    printf("Sua escolha: ");
    scanf("%i", &num1);

    switch (num1)
    {
    case 1:
        printf("\nValor 1: ");
        scanf("%i", &x);
        printf("\nValor 2: ");
        scanf("%i", &y);

        printf("\nA soma entre %i e %i � igual a %d", x, y, x + y);

        break;
    case 2:
        printf("\nValor 1: ");
        scanf("%i", &x);
        printf("Valor 2: ");
        scanf("%i", &y);

        printf("\nA subtra��o entre %i e %i � igual a %d", x, y, x - y);
        break;

    case 3:

        printf("\nValor 1: ");
        scanf("%f", &x1);
        printf("Valor 2: ");
        scanf("%f", &y1);

        printf("\nA divis�o entre %.2f e %.2f � igual a %.2f", x1, y1, x1 / y1);
        break;

    case 4:
        printf("\nValor 1: ");
        scanf("%i", &x);
        printf("Valor 2: ");
        scanf("%i", &y);

        printf("\nA divis�o entre %i e %i � igual a %d", x, y, x * y);
        break;

    default:
        break;
    }

    return 0;
}
