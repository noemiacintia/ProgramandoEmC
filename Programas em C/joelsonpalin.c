/*
Desafio 1)
   Fa�a um programa em C que receba um valor inteiro com 7 d�gitos significativos e
   verifique se ele � ou n�o um pal�ndromo. Um n�mero � um pal�ndromo quando os seus
   d�gitos invertidos, resulta no mesmo valor original. Ex 7569657.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int inteiro, invertido, d1, d2, d3;

    setlocale(LC_ALL, "");
    printf("Verifica se um inteiro � um pal�ndromo:\n\n");
    for (inteiro = 10; inteiro <= 999; inteiro ++){
    d1 = inteiro % 10;
    d2 = inteiro % 100 / 10;
    d3 = inteiro % 1000 / 100;
    invertido =  d1 * 100 + d2 * 10 + d3;
    if (invertido == inteiro)
        printf("\nO inteiro %d � um pal�ndromo.\nPois seu invertido eh: %d\n", inteiro, invertido);
    else
        printf("");}

    return 0;
}
