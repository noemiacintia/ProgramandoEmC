// C�lculo do IMC

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    float peso, altura, imc;

    setlocale (LC_ALL, "");
    printf("C�lculo do IMC:");
    printf("Digite sua Massa (Kg): ");
    scanf("%f", &peso);
    printf("Digite sua Altura (Metros): ");
    scanf("%f", &altura);
    imc = peso/(altura * altura);
    printf("Seu IMC e: %0.2f\n", imc);
return 0;
}
