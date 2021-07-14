/* Autor: No�mia C�ntia Sales Santos da Silva

Algoritmo:
    - Computador escolhe um n�mero entre 1 e 100;
    - Repete:
        - Usu�rio d� um palpite;
        - Se palpite igual a escolha ent�o
            - usu�rio acertou!
        - Se palpite menor que escolha ent�o
            - Palpite muito baixo!
        - Se palpite maior que escolha ent�o
            - Palpite muito alto!
    enquanto palpite n�o for igual a escolha; */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    int escolha, palpite;
    setlocale(LC_ALL, "");
    printf("Gera um(1) valor aleat�rio de 1 a 100 para o usu�rio tentar advinhar:\n\n");
    // para que os valores n�o se repitam
    srand(time(NULL));
    // sorteando um valor na faixa de 1 a 100
    escolha = rand () % 100 + 1;
    do
    {
        printf("\nD� um palpite entre 1 e 100: ");
        scanf ("%d", &palpite);
        if (palpite == escolha)
            printf("\nVoc� acertou!!!\nO valor era: %d\n\n", escolha);
        else if (palpite > escolha)
            printf("\nPalpite muito alto!\n\n");
        else
            printf("\nPalpite muito baixo!\n\n");
    }
    while (palpite != escolha);
    return 0;
}
