/*
2)Faça um programa que simule o lançamento de dois dados várias vezes.
O programa mostrará o resultado dos dois dados a cada lançamento e
encerrará quando a soma dos pontos dos dados for 12. Use a função rand()
na simulação dos lançamentos dos dados e um do-while para a repetição dos
lançamentos. Garanta, com o uso da função srand() que a cada execução do
programa a sequência dos pontos dos dados seja diferente.

Algoritmo:
    Repete
    lançar o 1 dado
    lançar o 2 dado
    somar os pontos dos dois dados
    mostrar resultado
        equando (soma dos lados != 12

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    int dado1, dado2, soma=0;

    setlocale(LC_ALL, "");
    printf("Simulando o lançamento de dois dados até que a soma dos pontos seja 12:\n\n");
    srand(time(NULL));
    do
    {
        dado1 = rand () % 6 + 1;
        dado2 = rand () % 6 + 1;
        soma = dado1 + dado2;
        printf("Dado 1: %d\n", dado1);
        printf("Dado 2: %d\n", dado2);
        printf("Soma: %d\n\n", soma);
    }
    while (soma != 12);
    return 0;
}
