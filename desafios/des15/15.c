#include <stdio.h>
#include <time.h>

int main()
{
    printf("=============================================================\n");
    printf("= Vou pensar em um numero de 0 a 5. tente advinhar qual foi =\n");
    printf("=============================================================\n\n");

    srand(time(0));
    int computador = rand() % 6;
    int chute;

    while (1)
    {
        printf("Qual e o seu chute? ");
        scanf("%i", &chute);

        if(chute < computador){
            printf("\nO numero chutado foi menor que o numero secreto\n");
            continue;
        }

        else if (chute > computador)
        {
            printf("\nO numero chutado foi maior que o numero secreto\n");
            continue;
        }

        else{
            printf("\nParabens voce acertou! Fim de jogo.\n");
            break;
        }
    }
}