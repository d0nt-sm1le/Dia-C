#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int chute;

    printf("*************************\n");
    printf("* Bem vindo ao meu jogo *\n");
    printf("*************************\n"); 
    
    printf("Qual � o seu chute? ");
    scanf("%d", &chute);
    printf("Voc� chutou o n�mero %d", chute);

}