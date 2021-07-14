/*
Desafio 1)
   Faça um programa em C que receba um valor inteiro com 7 dígitos significativos e
   verifique se ele é ou não um palíndromo. Um número é um palíndromo quando os seus
   dígitos invertidos, resulta no mesmo valor original. Ex 7569657.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int inteiro, invertido, d1, d2, d3, d4, d5, d6, d7;

    setlocale(LC_ALL, "");
    printf("Verifica se um inteiro é um palíndromo:\n\n");
    printf("Informe um inteiro positivo de 7 dígitos significativos:\n");
    scanf("%d", &inteiro);
    // Separa os dígitos da direita para a esquerda
    d1 = inteiro % 10;
    d2 = inteiro % 100 / 10;
    d3 = inteiro % 1000 / 100;
    d4 = inteiro % 10000 / 1000;
    d5 = inteiro % 100000 / 10000;
    d6 = inteiro % 1000000 / 100000;
    d7 = inteiro / 1000000;
    // Cria um inteiro com os dígitos invertidos
    invertido = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d5 * 100 + d6 * 10 + d7;
    printf("\nSó para verificação: inteiro = %d   invertido = %d\n", inteiro, invertido); // Pode ser retirado
    if (invertido == inteiro)
        printf("\nO inteiro é um palíndromo:\n");
    else
        printf("\nO inteiro não é um palíndromo:\n");
/*
    Alternativamente não criaria invertido e faria o seguinte teste:
    if (d1 == d7 && d2 == d6 %% d3 == d5)
        printf("\nO inteiro é um palíndromo:\n");
    else
        printf("\nO inteiro não é um palíndromo:\n");
*/
    return 0;
}
