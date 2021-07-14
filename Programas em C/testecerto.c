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

    if (imc <= 18.5)
        printf("\nClassifica��o: Magreza Grau de obesidade: 0");
    else if (imc > 18.5 && imc < 24.9)
        printf("\nClassifica��o: Normal Grau de obesidade: 0");
    else if (imc > 25.0 && imc < 29.9)
        printf("\nClassifica��o: Sobrepeso Grau de obesidade: I");
    else if (imc > 30.0 && imc < 39.9)
        printf("\nClassifica��o: Obesidade Grau de obesidade: II");
    else if (imc > 40.0)
        printf("\nClassifica��o: Obesidade grave Grau de obesidade: III");
    getch();
    return 0;
}
