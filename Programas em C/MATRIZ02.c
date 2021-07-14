/*
  2) Faça um programa em C preencha e mostre uma matriz identidade de ordem 10
*/
#include <stdio.h>
#include <locale.h>

#define ORDEM 10

void preenche_matriz_identidade(int[][ORDEM], int);
void mostra_matriz_inteira(int[][ORDEM], int, int);

int main() {
    int matriz[ORDEM][ORDEM];

    setlocale(LC_ALL, "");
    printf("Preenche e mostra uma matriz identidade de ordem 10:\n\n");
    preenche_matriz_identidade(matriz, ORDEM);
    printf("\nMatriz Identidade:\n\n");
    mostra_matriz_inteira(matriz, ORDEM, ORDEM);
    printf("\n");
    return 0;
}
// Preenche a matriz identidade
void preenche_matriz_identidade(int mat[][ORDEM], int ordem) {

    for (int lin = 0; lin <= ordem - 1; ++lin)
        for (int col = 0; col <= ordem - 1; ++col)
            if (lin == col)
                mat[lin][col] = 1;
            else
                mat[lin][col] = 0;
    return;
}
// Apresenta a matriz identidade
void mostra_matriz_inteira(int mat[][ORDEM], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin) {
        for (int col = 0; col <= numcol - 1; ++col)
            printf("%5d  ", mat[lin][col]);
        printf("\n");
    }
    return;
}
