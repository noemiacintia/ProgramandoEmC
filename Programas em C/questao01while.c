#include <stdio.h>
#include <locale.h>


int main ()
{
    int parcela, soma = 0;
    float unidade;

    setlocale(LC_ALL, "");
    printf("Programa que soma inteiros positivos e ");
    printf("para quando encontra um múltiplo de cinco (5):\n");
    printf("Informe um inteiro a somar: ");
    scanf("%d", &parcela);
    parcela %= 10;
    while (parcela != 0 && parcela != 5)
    {
        soma += parcela;
        printf("Informe um inteiro a somar: ");
        scanf("%d", &parcela);
        parcela %= 10;
    }
    printf("\nA soma dos inteiros positivos é %d\n\n", soma);
    return 0;
}
