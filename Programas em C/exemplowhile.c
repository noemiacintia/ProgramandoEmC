#include <stdio.h>
#include <locale.h>


int main ()
{
    int parcela, soma = 0;

    setlocale(LC_ALL, "");
    printf("Programa que soma inteiros positivos e ");
           printf("para quando encontra um negativo ou 0:\n");
           printf("Informe um inteiro a somar: ");
           scanf("%d", &parcela);
           while (parcela > 0)
{
    soma += parcela;
    printf("Informe um inteiro a somar: ");
        scanf("%d", &parcela);
    }
    printf("\nA soma dos inteiros positivos é %d\n\n", soma);
    return 0;
}
