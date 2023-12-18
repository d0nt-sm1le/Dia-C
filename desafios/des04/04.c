#include <stdio.h>

int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    int sucessor = num + 1;
    int antecessor = num - 1;

    printf("O sucessor de %i e igual a %d e seu antecessor e %d", num, sucessor, antecessor);
}
