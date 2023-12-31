#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num;
    int sec = rand() % 6;

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Eu vou pensar em um numero entre 0 e 5! Tente advinhar\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");

    printf("Qual e o seu chute? ");
    scanf("%d", &num);

    printf("Processando...\n");
    sleep(3);

    if(sec == num){
        printf("Parabens voce conseguiu me vencer!");
    }
    else{
        printf("Ganhei! Eu pensei no numero %i e nao no %d", sec, num);
    }

}
