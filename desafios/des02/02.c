#include <stdio.h>

int main()
{
    char nome[10];
    printf("Qual È o seu nome? ");
    scanf("%s", &nome);
    printf("\n… um prazer te conhecer %s", nome);
}
