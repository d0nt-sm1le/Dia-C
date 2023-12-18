#include <stdio.h>

int main()
{
    float carteira;
    printf("Quanto dinheiro voce tem na carteira? R$");
    scanf("%f", &carteira);

    printf("Com %.2f voce consegue comprar %.2f US.", carteira, carteira / 4.94);
}
