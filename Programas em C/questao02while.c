#include <stdio.h>
#include <locale.h>


int main ()
{
    int parcela, soma = 0, multiplo;

    setlocale(LC_ALL, "");
    printf("Programa que soma inteiros positivos e ");
    printf("para quando encontra um múltiplo de N:\n");
    printf("Informe o valor de N: ");
    scanf("%d", &multiplo);
    printf("Informe um inteiro a somar: ");
    scanf("%d", &parcela);
    while (parcela%multiplo != 0)
    {
        soma += parcela;
        printf("Informe um inteiro a somar: ");
        scanf("%d", &parcela);
    }
    printf("\nA soma dos inteiros positivos é %d\n\n", soma);
    return 0;
}
