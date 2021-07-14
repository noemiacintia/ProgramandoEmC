/* Autor: Noêmia Cíntia Sales Santos da Silva

Algoritmo:
    - Computador escolhe um número entre 1 e 100;
    - Repete:
        - Usuário dá um palpite;
        - Se palpite igual a escolha então
            - usuário acertou!
        - Se palpite menor que escolha então
            - Palpite muito baixo!
        - Se palpite maior que escolha então
            - Palpite muito alto!
    enquanto palpite não for igual a escolha; */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    int escolha, palpite;
    setlocale(LC_ALL, "");
    printf("Gera um(1) valor aleatório de 1 a 100 para o usuário tentar advinhar:\n\n");
    // para que os valores não se repitam
    srand(time(NULL));
    // sorteando um valor na faixa de 1 a 100
    escolha = rand () % 100 + 1;
    do
    {
        printf("\nDê um palpite entre 1 e 100: ");
        scanf ("%d", &palpite);
        if (palpite == escolha)
            printf("\nVocê acertou!!!\nO valor era: %d\n\n", escolha);
        else if (palpite > escolha)
            printf("\nPalpite muito alto!\n\n");
        else
            printf("\nPalpite muito baixo!\n\n");
    }
    while (palpite != escolha);
    return 0;
}
