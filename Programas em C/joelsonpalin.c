/*
Desafio 1)
   Faça um programa em C que receba um valor inteiro com 7 dígitos significativos e
   verifique se ele é ou não um palíndromo. Um número é um palíndromo quando os seus
   dígitos invertidos, resulta no mesmo valor original. Ex 7569657.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int inteiro, invertido, d1, d2, d3;

    setlocale(LC_ALL, "");
    printf("Verifica se um inteiro é um palíndromo:\n\n");
    for (inteiro = 10; inteiro <= 999; inteiro ++){
    d1 = inteiro % 10;
    d2 = inteiro % 100 / 10;
    d3 = inteiro % 1000 / 100;
    invertido =  d1 * 100 + d2 * 10 + d3;
    if (invertido == inteiro)
        printf("\nO inteiro %d é um palíndromo.\nPois seu invertido eh: %d\n", inteiro, invertido);
    else
        printf("");}

    return 0;
}
