#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    float peso, altura, imc;
    int contador = 1;

    printf("Calculando IMC:\n");
    for (contador = 1; contador <=5; contador++) {
        printf("Informe sua massa em kg: ");
        scanf("%fkg", &peso);
        printf("\nInforme sua altura em m: ");
        scanf("%fm", &altura);
        imc = peso / (altura * altura);
        printf("%.2f", imc);
        if (imc < 18.5)
            printf("\nIMC: %.2fkg/m*m\nClassifica��o: Magreza\nGrau de obesidade: 0\n", imc);
        else if (imc >= 18.5 && imc <= 24.9)
            printf("\nIMC: %.2fkg/m*m\nClassifica��o: Normal\nGrau de obesidade: 0\n", imc);
        else if (imc >= 25.0 && imc <= 29.9)
            printf("\nIMC: %.2fkg/m*m\nClassifica��o: Sobrepeso\nGrau de obesidade: I\n", imc);
        else if (imc >= 30.0 && imc <= 39.9)
            printf("\nCom IMC: %.2fkg/m*m\nClassifica��o: Obesidade\nGrau de obesidade: II\n", imc);
        else if (imc > 40.0)
            printf("\nIMC: %.2fkg/m*m\nClassifica��o: Obesidade grave\nGrau de obesidade: III\n", imc);
    getch();
    }
    return 0;
}
