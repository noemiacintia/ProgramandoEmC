/*
  3) Faça um programa em C que leia os elementos de uma matriz de números reais 5x7
     e mostre a matriz lida e sua transposta
*/
#include <stdio.h>
#include <locale.h>

#define MAX_LIN 5
#define MAX_COL 7

void le_matriz_real(float[][MAX_COL], int, int);
void mostra_matriz_real(float[][MAX_COL], int, int);
void calcula_transposta(float[][MAX_COL], int, int, float[][MAX_LIN]);
void mostra_matriz_transposta_real(float[][MAX_LIN], int, int);

int main() {
    float matriz[MAX_LIN][MAX_COL];
    float transposta[MAX_COL][MAX_LIN];

    setlocale(LC_ALL, "");
    printf("Ler emostra os elementos de uma matriz de números reais %dx%d e mostra sua transposta:\n\n", MAX_LIN, MAX_COL);
    printf("\nInforme os elemento da matriz %dx%d: \n", MAX_LIN, MAX_COL);
    le_matriz_real(matriz, MAX_LIN, MAX_COL);
    printf("\nElementos da matriz %dx%d:\n\n", MAX_LIN, MAX_COL);
    mostra_matriz_real(matriz, MAX_LIN, MAX_COL);
    calcula_transposta(matriz, MAX_LIN, MAX_COL, transposta);
    printf("\nElementos da matriz transposta %dx%d:\n\n", MAX_COL, MAX_LIN);
    mostra_matriz_transposta_real(transposta, MAX_COL, MAX_LIN);
    printf("\n");
    return 0;
}
// Lê os elementos de uma matriz real qualquer
void le_matriz_real(float mat[][MAX_COL], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin)
        for (int col = 0; col <= numcol - 1; ++col)
            scanf("%f", &mat[lin][col]);
    return;
}
// Mostra os elementos de uma matriz real qualquer
void mostra_matriz_real(float mat[][MAX_COL], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin) {
        for (int col = 0; col <= numcol - 1; ++col)
            printf("%10.2f ", mat[lin][col]);
        printf("\n");
    }
    return;
}
// Calcula a matriz transposta de uma matriz real qualquer
void calcula_transposta(float mat[][MAX_COL], int numlin, int numcol, float transp[][MAX_LIN]) {

    for (int lin = 0; lin <= numcol - 1; ++lin)
        for (int col = 0; col <= numlin - 1; ++col)
            transp[lin][col] = mat[col][lin];
    return;
}
// Mostra os elementos de uma matriz real transposta
void mostra_matriz_transposta_real(float mat[][MAX_LIN], int numlin, int numcol) {

    for (int lin = 0; lin <= numlin - 1; ++lin) {
        for (int col = 0; col <= numcol - 1; ++col)
            printf("%10.2f ", mat[lin][col]);
        printf("\n");
    }
    return;
}
