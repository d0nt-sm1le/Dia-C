#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma();
float subtra();
float vi();
float divi();
float fat();
float equa1();
float equa2();

/*typedef struct
{

    

    // operadores aritméticos
    float soma; //soma
    float sub;  //subtração
    float vez; //vezes
    float fact; //números fatoriais

    float div;  //divisão
    float equa1; //equação de primeiro grau
    float equa2; //equação se segundo grau
    

}operadores;*/


int main()
{
    do
    {

        int esc;
        int nums;

        //introdução
        setlocale(LC_ALL, "portuguese");
        printf("Bem vindo a minha calculadora!\n");
        printf("Você tem as seguintes opções: ");
        printf("\n\nSoma[1]\nSubtração[2]\nMultiplicação[3]\nDivisão[4]\nEquação primeiro grau[5]\nEquação segundo grau[6]");

        printf("\n\nEscolha: ");
        scanf("%i", &esc);

        switch (esc)
        {
        case 1:
            int s = soma(1,1);
            printf("%i", soma);
            break;
        
        default:
            break;
        }

    } while (1);
}

int soma(int x, int y){
    return x + y;
}