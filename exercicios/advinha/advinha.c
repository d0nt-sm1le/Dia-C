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
    
    Fácil 15 tentativas
    Médio 10 tentativas
    Dificil 5 tentativas
    
    */

   while (1)
   {
    printf("Nesse jogo você vai ter que advinhar um numero de 0 a 100 que o seu pc vai escolher \ne você tem seguintes opções: \n\nDíficil[0]\nMédio[1]\nFácil[2]\n\nQual a sua escolha? ");
    scanf("%i", &escolha);

    if(escolha > 2){
        printf("Número invalido, tente novamente.\n\n");
        continue;
    }

    for ( i = numero[escolha]; i > -1; i--)
    {
        printf("\nOk. Agora chute seu número: ");
        scanf("%d", &jogador);

        if(jogador == numeroS){
            printf("Parabens, você acertou!!\nFim de jogo.\n\n");
            break;
        }

        else if (jogador > 100){
            printf("Eu disse que o número é de 0 a 100, você é burro ou oque? tente de novo.\n");
        }

        else if (jogador > numeroS){
            printf("O número que você chutou é maior que o número oficial, tente de novo.\n");
        }
        
        else{
            printf("O número que você chutou é menor que o número oficial, tente de novo.\n");
        }

        printf("Você tem %i de tentativas\n\n", i);
    }

    printf("Deseja jogar denovo? [0/1] ");
    scanf("%i", &escolha2);

    //0 = sim 1 = não

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
