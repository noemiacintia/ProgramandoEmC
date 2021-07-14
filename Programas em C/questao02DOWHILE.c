/*
2)Fa�a um programa que simule o lan�amento de dois dados v�rias vezes.
O programa mostrar� o resultado dos dois dados a cada lan�amento e
encerrar� quando a soma dos pontos dos dados for 12. Use a fun��o rand()
na simula��o dos lan�amentos dos dados e um do-while para a repeti��o dos
lan�amentos. Garanta, com o uso da fun��o srand() que a cada execu��o do
programa a sequ�ncia dos pontos dos dados seja diferente.

Algoritmo:
    Repete
    lan�ar o 1 dado
    lan�ar o 2 dado
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
    printf("Simulando o lan�amento de dois dados at� que a soma dos pontos seja 12:\n\n");
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
