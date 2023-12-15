#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int jogador;
    int escolha;
    int escolha2;
    int numeroS = rand() % 101;
    int numero[4] = {4, 9, 14};
    int i;

    printf("**************************************\n");
    printf("((((((((Bem vindo ao meu jogo)))))))))\n");
    printf("**************************************\n\n");

    /*
    
    F�cil 15 tentativas
    M�dio 10 tentativas
    Dificil 5 tentativas
    
    */

   while (1)
   {
    printf("Nesse jogo voc� vai ter que advinhar um numero de 0 a 100 que o seu pc vai escolher \ne voc� tem seguintes op��es: \n\nD�ficil[0]\nM�dio[1]\nF�cil[2]\n\nQual a sua escolha? ");
    scanf("%i", &escolha);

    if(escolha > 2){
        printf("N�mero invalido, tente novamente.\n\n");
        continue;
    }

    for ( i = numero[escolha]; i > -1; i--)
    {
        printf("\nOk. Agora chute seu n�mero: ");
        scanf("%d", &jogador);

        if(jogador == numeroS){
            printf("Parabens, voc� acertou!!\nFim de jogo.\n\n");
            break;
        }

        else if (jogador > 100){
            printf("Eu disse que o n�mero � de 0 a 100, voc� � burro ou oque? tente de novo.\n");
        }

        else if (jogador > numeroS){
            printf("O n�mero que voc� chutou � maior que o n�mero oficial, tente de novo.\n");
        }
        
        else{
            printf("O n�mero que voc� chutou � menor que o n�mero oficial, tente de novo.\n");
        }

        printf("Voc� tem %i de tentativas\n\n", i);
    }

    printf("Deseja jogar denovo? [0/1] ");
    scanf("%i", &escolha2);

    //0 = sim 1 = n�o

    if (escolha2 == 0)
    {
        printf("\n\n");
        continue;
    }
    
    else{
        break;
    }
   }
}
