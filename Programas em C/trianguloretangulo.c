#include <stdio.h>
#include <locale.h>

int main ()
{
    float reta1, reta2, reta3;

    setlocale(LC_ALL, "");
    printf("O programa analisa se 3 retas formam um tri�ngulo ret�ngulo:");
    printf("\nInforme o comprimento da reta 1: ");
    scanf("%f", &reta1);
    printf("\nInforme o comprimento da reta2: ");
    scanf("%f", &reta2);
    printf("\nInforme o comprimento da reta 3: ");
    scanf("%f", &reta3);
    if (reta1 * reta1 == reta2 * reta2 + reta3 * reta3 ||
        reta2 * reta2 == reta1 * reta1 + reta3 * reta3 ||
        reta3 * reta3 == reta2 * reta2 + reta1 * reta1)
        printf("\nAs retas formam um tri�ngulo ret�ngulo!\n");
    else
        printf("\nAs retas n�o formam um tri�ngulo ret�ngulo!\n");
    return 0;
}
