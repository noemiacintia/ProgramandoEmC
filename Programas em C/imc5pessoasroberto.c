/*          Algoritmo:
    - Repetir para 5 pessoas
    - Solicitar o peso e a altura de uma pessoa
    - Calcular o IMC da pessoa, pela fórmula IMC = peso / altura * altura
    - Mostrar o IMC da pessoa
    - Se IMC abaixo de 17
        - Mostrar: "Muito abaixo do peso"
    - Senão se IMC menor que 18.5
        - Mostrar: "Abaixo do peso"
    - Senão se IMC menor que 25
        - Mostrar: "Peso normal"
    - Senão se IMC menor que 30
        - Mostrar: "Acima do peso"
    - Senão se IMC menor que 35
        - Mostrar: "Obesidade I"
    - Senão se IMC menor que 40
        - Mostrar: "Obesidade II (severa)"
    - Senão
        - Mostrar: "Obesidade III (mórbida)"
*/
#include <stdio.h>
#include <locale.h>

int main ()
{
    float peso, altura, imc;
    int vezes;

    setlocale(LC_ALL, "");
    printf("Calculando, classificando e mostrando o IMC:\n");
    for (vezes = 1; vezes <=5; vezes++)
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
