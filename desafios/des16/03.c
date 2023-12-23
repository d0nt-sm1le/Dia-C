#include <stdio.h>

int main()
{
    int veloci;
    printf("Qual e a velocidade atual do carro? ");
    scanf("%i", &veloci);

    if (veloci <= 80)
    {
        printf("\nTenha um bom dia, dirija com seguranca!");
    }
    else{
        float multa = (veloci - 80) * 7;
        printf("\nMultado! Voce excedeu o limite que e de 80km/h\nVoce deve pagar a multa de R$:%.2f", multa);
    }
}
