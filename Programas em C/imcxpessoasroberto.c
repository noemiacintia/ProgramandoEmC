#include <stdio.h>
#include <locale.h>

int main ()
{
    float peso, altura, imc;
    int vezes, contador;

    setlocale(LC_ALL, "");
    printf("Calculando, classificando e mostrando o IMC:\n");
    printf("Para quantas pessoas voc� quer calcular o IMC? ");
    scanf("%d", &vezes);
    for (contador = 1; contador <= vezes; contador++)
    {
        printf("\nInforme sua massa em kg: ");
        scanf("%fkg", &peso);
        printf("Informe sua altura em m: ");
        scanf("%fm", &altura);
        imc = peso / (altura * altura);
        printf("O IMC �: %.2fkg/m�", imc);
        if (imc < 17)
            printf("\nSitua��o: Muito abaixo do peso\n");
        else if (imc < 18.5)
            printf("\nSitua��o: Abaixo do peso\n");
        else if (imc < 25)
            printf("\nSitua��o: Peso normal\n");
        else if (imc < 30)
            printf("\nSitua��o: Acima do peso\n");
        else if (imc < 35)
            printf("\nSitua��o: Obesidade I\n");
        else if (imc < 40)
            printf("\nSitua��o: Obesidade II (severa)\n");
        else
            printf("\nSitua��o: Obesidade III (m�rbida)\n");
    }
    return 0;
}
