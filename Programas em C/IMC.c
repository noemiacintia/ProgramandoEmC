// C�lculo do IMC

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    float peso, altura, imc;
    int contador = 1;

    setlocale (LC_ALL, "");
    printf("C�lculo do IMC:");
    for (contador = 1; contador <= 5; contador++)
    {
        printf("Digite sua Massa (Kg): ");
        scanf("%f",&peso);
        printf("Digite sua Altura (Metros): ");
        scanf("%f",&altura);
        imc = peso/(pow(altura,2));
        printf("Seu IMC e: %0.2f\n",imc);

        if (imc < 18.5)
        {
            printf("\nClassifica��o: Magreza\nGrau de obesidade: 0");
        }
        else if (imc >= 18.5 && imc <= 24.9)
        {
            printf("\nClassifica��o: Normal\nGrau de obesidade: 0");
        }
        else if (imc >= 25.0 && imc <= 29.9)
        {
            printf("\nClassifica��o: Sobrepeso\nGrau de obesidade: I");
        }
        else if (imc >= 30.0 && imc <= 39.9)
        {
            printf("\nClassifica��o: Obesidade\nGrau de obesidade: II");
        }
        else if (imc > 40.0)
        {
            printf("\nClassifica��o: Obesidade grave\nGrau de obesidade: III");
        }
        else
            printf ("Desconhecido!");
        }
        return 0;
}


