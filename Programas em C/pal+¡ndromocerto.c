/*
Desafio 1)
   Fa�a um programa em C que receba um valor inteiro com 7 d�gitos significativos e
   verifique se ele � ou n�o um pal�ndromo. Um n�mero � um pal�ndromo quando os seus
   d�gitos invertidos, resulta no mesmo valor original. Ex 7569657.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int inteiro, invertido, d1, d2, d3, d4, d5, d6, d7;

    setlocale(LC_ALL, "");
    printf("Verifica se um inteiro � um pal�ndromo:\n\n");
    printf("Informe um inteiro positivo de 7 d�gitos significativos:\n");
    scanf("%d", &inteiro);
    // Separa os d�gitos da direita para a esquerda
    d1 = inteiro % 10;
    d2 = inteiro % 100 / 10;
    d3 = inteiro % 1000 / 100;
    d4 = inteiro % 10000 / 1000;
    d5 = inteiro % 100000 / 10000;
    d6 = inteiro % 1000000 / 100000;
    d7 = inteiro / 1000000;
    // Cria um inteiro com os d�gitos invertidos
    invertido = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d5 * 100 + d6 * 10 + d7;
    printf("\nS� para verifica��o: inteiro = %d   invertido = %d\n", inteiro, invertido); // Pode ser retirado
    if (invertido == inteiro)
        printf("\nO inteiro � um pal�ndromo:\n");
    else
        printf("\nO inteiro n�o � um pal�ndromo:\n");
/*
    Alternativamente n�o criaria invertido e faria o seguinte teste:
    if (d1 == d7 && d2 == d6 %% d3 == d5)
        printf("\nO inteiro � um pal�ndromo:\n");
    else
        printf("\nO inteiro n�o � um pal�ndromo:\n");
*/
    return 0;
}
