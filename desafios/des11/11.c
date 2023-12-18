#include <stdio.h>

int main()
{
    float produto;

    printf("Qual e o preco do produto? ");
    scanf("%f", &produto);

    float desconto = (produto/100) * 5;

    printf("O produtor que custava R$%.2f, na promocao de 5%% vai custar R$%.2f", produto, produto - desconto);
}
