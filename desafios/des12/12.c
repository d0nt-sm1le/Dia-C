#include <stdio.h>

int main()
{
    float salario;

    printf("Qual � o salario de Funcion�rio? R$");
    scanf("%f", &salario);

    float aumento = (salario/100) * 15;

    printf("Um funcionario que ganhava R$%.2f, com 15%% de aumento, passa a receber R$%.2f", salario, salario + aumento);
}
