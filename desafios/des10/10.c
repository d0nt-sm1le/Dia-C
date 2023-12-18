#include <stdio.h>

int main()
{
    
    float largura;
    float altura;

    printf("Qual e a altura da parede? ");
    scanf("%f", &altura);

    printf("Qual e largura da parede? ");
    scanf("%f", &largura);

    float area = largura * altura;

    printf("A parede tem o comprimento de %.2fx%.2f e tem a area de %.3fm²", altura, largura, area);
    printf("\nE e preciso de %.4fl de tinta", area / 2);
}
