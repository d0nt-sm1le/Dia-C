#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    int a;
    int b;

    printf("Calculadora: \n\n");
    printf("Adi��o[0]\nSubtra��o[1]\nMultiplica��o[2]\n\n");
    printf("Qual a sua escolha: ");
    scanf("%i", &op);

    printf("Agora escreva os n�meros que voc� deseja aplicar: \n");
    printf("Num�ro A: ");
    scanf("%i", &a);
    printf("N�mero B: ");
    scanf("%i", &b);

    if(op == 0){
        printf("\n%i + %i = %d", a, b, a + b);
    }

    else if(op == 1){
        printf("\n%i - %i = %d", a, b, a - b);
    }
    else{
        printf("\n%i x %i = %d", a, b, a * b);
    }
}
