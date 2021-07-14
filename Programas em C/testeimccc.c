#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    float peso, altura, imc;
    printf("Informe sua massa em kg: ");
    scanf("%fkg", &peso);
    printf("\nInforme sua altura em m: ");
    scanf("%fm", &altura);
    imc = peso / (altura * altura);
    printf("%.2f", imc);
    getch();
    return 0;
}
