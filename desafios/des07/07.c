#include <stdio.h>

int main()
{
    float dis;
    printf("Digite um distancia em metros: ");
    scanf("%f", &dis);
    printf("A medida de %.1fm corresponde a: \n", dis);

    
    printf("%.3fkm\n", dis / 1000);
    printf("%.2fhm\n", dis / 100);
    printf("%1.fdam\n", dis / 10);
    printf("%1.fdm\n", dis * 10);
    printf("%0.fcm\n", dis * 100);
    printf("%0.fmm", dis * 1000);

}
