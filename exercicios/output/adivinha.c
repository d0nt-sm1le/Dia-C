#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int chute;
    int numero = 10;
    int i;
    int contador = 3;

    printf("*************************\n");
    printf("* Bem vindo ao meu jogo *\n");
    printf("*************************\n\n");

    for (i = 0; i < 3; i++){
        printf("Qual é o seu chute? ");
        scanf("%i", &chute);

        int acertou = chute == numero;
        if (acertou)
        {
            printf("Parabens você acertou!\n");
            printf("Fim de jogo!");
            break;
        }
        else
        {
            if(chute < numero){
                printf("O seu chute foi menor que o número secreto!!\n");
            }
            if (chute > numero){
                printf("O seu chute foi maior que número secreto!!\n");
            } 
        }
        printf("Fim de jogo, você tem mais %i chances!\n\n",contador);
    }
}