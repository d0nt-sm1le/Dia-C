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
    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Você chutou o número %d", chute);

}