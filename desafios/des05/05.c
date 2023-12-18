#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    int dobro = num * 2;
    int triplo = num * 3;
    double raiz = sqrt(num);

    printf("O dobro de %i e igual a %i\nO triplo de %i e igual a %d\nA raiz quadrada de %i e igual a %.2f", num, dobro, num, triplo, num, raiz);
}
