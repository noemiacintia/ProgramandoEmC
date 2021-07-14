#include <stdio.h>
#include <locale.h>

int main() {
    int codigo, d1, d2, d3, d4, d5, d6, d7, d8, soma, digito;

    setlocale(LC_ALL, "");
    printf("Calcula o dígito verificador de um código de 8 dígitos:\n\n");
    printf("Informe um código inteiro positivo de 8 dígitos:\n");
    scanf("%d", &codigo);
    // Separa os dígitos da direita para a esquerda
    d1 = codigo % 10;
    d2 = codigo % 100 / 10;
    d3 = codigo % 1000 / 100;
    d4 = codigo % 10000 / 1000;
    d5 = codigo % 100000 / 10000;
    d6 = codigo % 1000000 / 100000;
    d7 = codigo % 10000000 / 1000000;
    d8 = codigo / 10000000;
    // Cálculo do dígito verificador pelo método Módulo 11
    soma = d1 * 2 + d2 * 3 + d3 * 4 + d4 * 5 + d5 * 6 + d6 * 7 + d7 * 8 + d8 * 9;
    digito = 11 - (soma * 10 % 11);
/*
    poderia ser também:
    digito = 11 - ((d1 * 2 + d2 * 3 + d3 * 4 + d4 * 5 + d5 * 6 + d6 * 7 + d7 * 8 + d8 * 9) * 10 % 11);
*/
    // O 0(zero) no especificador de formato ("%08d" e "%01d") faz mostrar os zeros não significativos do valores das variáveis
    // O 8 no especificador de formato ("%08d") faz mostrar 8 dígitos do valor da variável código
    // O 1 no especificador de formato ("%01d") faz mostrar 1 dígito do valor da variável código
    printf("\nCódigo com dígito: %08d-%01d\n", codigo, digito);
    return 0;
}
