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
        printf("Qual � o seu chute? ");
        scanf("%i", &chute);

        int acertou = chute == numero;
        if (acertou)
        {
            printf("Parabens voc� acertou!\n");
            printf("Fim de jogo!");
            break;
        }
        else
        {
            if(chute < numero){
                printf("O seu chute foi menor que o n�mero secreto!!\n");
            }
            if (chute > numero){
                printf("O seu chute foi maior que n�mero secreto!!\n");
            } 
        }
        printf("Fim de jogo, voc� tem mais %i chances!\n\n",contador);
    }
}