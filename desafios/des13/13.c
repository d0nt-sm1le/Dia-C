#include <stdio.h>

int main()
{
    float celsios;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsios);

    float F = (celsios* 9/5) + 32;
    printf("A temperatura de %.2f corresponde a %.2f F!",celsios, F);
}
