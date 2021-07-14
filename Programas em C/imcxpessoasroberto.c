#include <stdio.h>
#include <locale.h>

int main ()
{
    float peso, altura, imc;
    int vezes, contador;

    setlocale(LC_ALL, "");
    printf("Calculando, classificando e mostrando o IMC:\n");
    printf("Para quantas pessoas você quer calcular o IMC? ");
    scanf("%d", &vezes);
    for (contador = 1; contador <= vezes; contador++)
    {
        printf("\nInforme sua massa em kg: ");
        scanf("%fkg", &peso);
        printf("Informe sua altura em m: ");
        scanf("%fm", &altura);
        imc = peso / (altura * altura);
        printf("O IMC é: %.2fkg/m²", imc);
        if (imc < 17)
            printf("\nSituação: Muito abaixo do peso\n");
        else if (imc < 18.5)
            printf("\nSituação: Abaixo do peso\n");
        else if (imc < 25)
            printf("\nSituação: Peso normal\n");
        else if (imc < 30)
            printf("\nSituação: Acima do peso\n");
        else if (imc < 35)
            printf("\nSituação: Obesidade I\n");
        else if (imc < 40)
            printf("\nSituação: Obesidade II (severa)\n");
        else
            printf("\nSituação: Obesidade III (mórbida)\n");
    }
    return 0;
}
