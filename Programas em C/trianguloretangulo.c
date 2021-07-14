#include <stdio.h>
#include <locale.h>

int main ()
{
    float reta1, reta2, reta3;

    setlocale(LC_ALL, "");
    printf("O programa analisa se 3 retas formam um triângulo retângulo:");
    printf("\nInforme o comprimento da reta 1: ");
    scanf("%f", &reta1);
    printf("\nInforme o comprimento da reta2: ");
    scanf("%f", &reta2);
    printf("\nInforme o comprimento da reta 3: ");
    scanf("%f", &reta3);
    if (reta1 * reta1 == reta2 * reta2 + reta3 * reta3 ||
        reta2 * reta2 == reta1 * reta1 + reta3 * reta3 ||
        reta3 * reta3 == reta2 * reta2 + reta1 * reta1)
        printf("\nAs retas formam um triângulo retângulo!\n");
    else
        printf("\nAs retas não formam um triângulo retângulo!\n");
    return 0;
}
