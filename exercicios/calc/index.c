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

    

    // operadores aritm�ticos
    float soma; //soma
    float sub;  //subtra��o
    float vez; //vezes
    float fact; //n�meros fatoriais

    float div;  //divis�o
    float equa1; //equa��o de primeiro grau
    float equa2; //equa��o se segundo grau
    

}operadores;*/


int main()
{
    do
    {

        int esc;
        int nums;

        //introdu��o
        setlocale(LC_ALL, "portuguese");
        printf("Bem vindo a minha calculadora!\n");
        printf("Voc� tem as seguintes op��es: ");
        printf("\n\nSoma[1]\nSubtra��o[2]\nMultiplica��o[3]\nDivis�o[4]\nEqua��o primeiro grau[5]\nEqua��o segundo grau[6]");

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