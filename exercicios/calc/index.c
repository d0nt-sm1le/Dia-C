#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(float x, float y);
int subtra(float x, float y);
int ve(float x, float y);
int tab(int x);   
int divi(float x, float y);
int fat(int x);
int equa1();
int equa2();

typedef struct
{
    int esc;
    float res;
    float a;
    float b;
    float c; 


}operadores;


int main()
{
    operadores s1;
    
    do
    {
        //introdução
        setlocale(LC_ALL, "portuguese");
        printf("Bem vindo a minha calculadora!\n");
        printf("Você tem as seguintes opções: ");
        printf("\n\nSoma[1]\nSubtração[2]\nMultiplicação[3]\nTabuada[4]\nDivisão[5]");
        printf("\nFatorial[6]\nEquação primeiro grau[7]\nEquação segundo grau[8]");

        printf("\n\nEscolha: ");
        scanf("%i", &s1.esc);

        switch (s1.esc)
        {
        case 1:
            printf("\nValor 1: ");
            scanf("%f", &s1.a);
            printf("Valor 2: ");
            scanf("%f", &s1.b);

            soma(s1.a, s1.b);
            break;
        
        case 2:
            printf("\nValor 1: ");
            scanf("%f", &s1.a);
            printf("Valor 2: ");
            scanf("%f", &s1.b);

            subtra(s1.a, s1.b);
            break;
        
        case 3:
            printf("\nValor 1: ");
            scanf("%f", &s1.a);
            printf("Valor 2: ");
            scanf("%f", &s1.b);

            ve(s1.a, s1.b);   
            break;

        case 4:
            printf("\nValor: ");
            scanf("%f", &s1.a);

            tab(s1.a);

        case 5:
            printf("\nValor 1: ");
            scanf("%f", &s1.a);
            printf("Valor 2: ");
            scanf("%f", &s1.b);

            divi(s1.a, s1.b);
            break;

        case 6:
            printf("\nValor 1: ");
            scanf("%f", &s1.a);

            fat(s1.a);

            break;
        default:
            break;
        }

        system("pause");
        system("cls");
    } while (1);
}


int soma(float x, float y){
    printf("\n%.2f + %.2f = %.2f\n", x, y, x + y);
}

int subtra(float x, float y){
    printf("\n%.2f + %.2f = %.2f\n", x, y, x - y);
}

int ve(float x, float y){
    printf("\n%.2f x %.2f = %.2f\n", x, y, x * y);
}

int tab(int x){
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%i x %i = %d\n", x, i, x * i);
    }   
    printf("\n");
}

int divi(float x, float y){
    printf("\n%.2f / %.2f = %.2f\n", x, y, x / y);
}

int fat(int x){
    float var;
    float res;
    for (int i = x; i >= 1; i--)
    {
        var = i * i;
        res -= var;
    }

    printf("\n\nO fatorial de  %i é igual a %.1f\n", x, res);
}