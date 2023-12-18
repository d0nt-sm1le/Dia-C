#include <stdio.h>

int main()
{
    float n1;
    float n2;

    printf("Qual e a primeira nota do aluno? ");
    scanf("%f", &n1);

    printf("Qual e a segunda nota do aluno? ");
    scanf("%f", &n2);

    printf("A media entre %.2f e %.2f e igual a %.1f ", n1, n2, (n1 + n2) / 2);
}
