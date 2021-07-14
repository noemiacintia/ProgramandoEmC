#include <stdio.h>
#include <locale.h>

int main() {
    int codigo, d1, d2, d3, d4, d5, d6, d7, d8, soma, digito;

    setlocale(LC_ALL, "");
    printf("Calcula o d�gito verificador de um c�digo de 8 d�gitos:\n\n");
    printf("Informe um c�digo inteiro positivo de 8 d�gitos:\n");
    scanf("%d", &codigo);
    // Separa os d�gitos da direita para a esquerda
    d1 = codigo % 10;
    d2 = codigo % 100 / 10;
    d3 = codigo % 1000 / 100;
    d4 = codigo % 10000 / 1000;
    d5 = codigo % 100000 / 10000;
    d6 = codigo % 1000000 / 100000;
    d7 = codigo % 10000000 / 1000000;
    d8 = codigo / 10000000;
    // C�lculo do d�gito verificador pelo m�todo M�dulo 11
    soma = d1 * 2 + d2 * 3 + d3 * 4 + d4 * 5 + d5 * 6 + d6 * 7 + d7 * 8 + d8 * 9;
    digito = 11 - (soma * 10 % 11);
/*
    poderia ser tamb�m:
    digito = 11 - ((d1 * 2 + d2 * 3 + d3 * 4 + d4 * 5 + d5 * 6 + d6 * 7 + d7 * 8 + d8 * 9) * 10 % 11);
*/
    // O 0(zero) no especificador de formato ("%08d" e "%01d") faz mostrar os zeros n�o significativos do valores das vari�veis
    // O 8 no especificador de formato ("%08d") faz mostrar 8 d�gitos do valor da vari�vel c�digo
    // O 1 no especificador de formato ("%01d") faz mostrar 1 d�gito do valor da vari�vel c�digo
    printf("\nC�digo com d�gito: %08d-%01d\n", codigo, digito);
    return 0;
}
