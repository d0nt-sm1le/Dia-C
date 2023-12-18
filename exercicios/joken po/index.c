#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int jogador;
    int computador = rand() % 3;
    char jogadas[3][8] = {"pedra","papel","tesoura"};

    while (1)
    {
        printf("Voce tem as seguintes opções: \nPedra[0] \nPapel[1] \nTesoura[2]\n\nQual a sua escolha? ");
        scanf("%i", &jogador);

        if (jogador > 2 || jogador < 0)
        {
            printf("\n\nNúmero invalido tente novamente\n\n");
            continue;
        }
        
        Sleep(1000);
        printf("Jo\n");
        Sleep(1000);
        printf("Ken\n");
        Sleep(1000);
        printf("Po\n");
        Sleep(1000);

        printf("==================================\n");
        printf("O jogador jogou %s\n", jogadas[jogador]);
        printf("O computador jogou %s\n", jogadas[computador]);
        printf("==================================\n");

        if (jogador == 0){
            if (computador == 1)
            {
                printf("O computador ganhou!");
            }
            
            else if (computador == 2)
            {
                printf("O jogador ganhou!");
            }

            else{
                printf("Empate!");
            }
        }

        else if (jogador == 1){
            if (computador == 2)
            {
                printf("O computador ganhou!");
            }

            else if(computador == 0)
            {
                printf("O jogador ganhou!");
            }

            else{
                printf("Empate!");
            }
        }

        else if (jogador == 2){

            if (computador == 0)
            {
                printf("O computador ganhou!\n");
            }

            else if(computador == 1)
            {
                printf("O jogador ganhou!");
            }

            else{
                printf("Empate");
            }
        }
        printf("\n\nFim de jogo!\n\n");
        break;
    }
    system("pause");
}
