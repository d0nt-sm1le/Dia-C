#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    int a;
    int b;

    printf("Calculadora: \n\n");
    printf("Adição[0]\nSubtração[1]\nMultiplicação[2]\n\n");
    printf("Qual a sua escolha: ");
    scanf("%i", &op);

    printf("Agora escreva os números que você deseja aplicar: \n");
    printf("Numéro A: ");
    scanf("%i", &a);
    printf("Número B: ");
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
