/*          Algoritmo:
    - Repetir para 5 pessoas
    - Solicitar o peso e a altura de uma pessoa
    - Calcular o IMC da pessoa, pela f�rmula IMC = peso / altura * altura
    - Mostrar o IMC da pessoa
    - Se IMC abaixo de 17
        - Mostrar: "Muito abaixo do peso"
    - Sen�o se IMC menor que 18.5
        - Mostrar: "Abaixo do peso"
    - Sen�o se IMC menor que 25
        - Mostrar: "Peso normal"
    - Sen�o se IMC menor que 30
        - Mostrar: "Acima do peso"
    - Sen�o se IMC menor que 35
        - Mostrar: "Obesidade I"
    - Sen�o se IMC menor que 40
        - Mostrar: "Obesidade II (severa)"
    - Sen�o
        - Mostrar: "Obesidade III (m�rbida)"
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
