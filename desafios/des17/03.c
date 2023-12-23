#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if(num % 2 == 0){
        printf("\nO %i e um numero PAR", num);
    }

    else{
        printf("\nO %i e um numero IMPAR", num);
    }
}
