/*
 6) Faça um programa em C para receber as jogadas de um Jogo da Velha e mostrar o tabuleiro
    do jogo atualizado a cada jogada, posicionando os O’s e os X’s
    Sugestão para o tabuleiro:
         |     |
      1  |  2  |  3
    -----+-----+-----
      4  |  5  |  6
    -----+-----+-----
      7  |  8  |  9
         |     |
    - A numeração corresponde às posições a serem referenciadas nas jogadas
    - O programa deve informar automaticamente quando houver vitória de um jogador ou houver empate.
    - Use uma matriz para representar o tabuleiro na memória
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inicializa_tabuleiro(char[][3]);
void mostra_tabuleiro(char[][3]);
void coloca_jogada(char[][3], int, char);
int ha_vitoria(char[][3]);

int main() {
    char tabuleiro[3][3], simbolo = ' ';
    int jogada = 0, jogador = 0, posicao;

    setlocale(LC_ALL, "");
    printf("Acompanhamento das jogadas de um Jogo da Velha:\n\n");
    inicializa_tabuleiro(tabuleiro);
    do {
        ++jogada;
        if (jogador == 1) {
            jogador =  2;
            simbolo = 'X';
        }
        else {
            jogador =  1;
            simbolo = 'O';
        }
        mostra_tabuleiro(tabuleiro);
        printf("Informe a jogada do Jogador %d: ", jogador);
        scanf("%d", &posicao);
        coloca_jogada(tabuleiro, posicao, simbolo);
    } while (!ha_vitoria(tabuleiro) && jogada < 9);
    mostra_tabuleiro(tabuleiro);
    if (ha_vitoria(tabuleiro))
        printf("\nO Jogador %d venceu!!!\n", jogador);
    else
        printf("\nHouve empate!!!\n");
    return 0;
}

void inicializa_tabuleiro(char tabuleiro[][3]) {
    int posicao = 0;

        for (int lin = 0; lin <= 2; ++lin)
            for (int col = 0; col <= 2; ++col)
                tabuleiro[lin][col] = ++posicao + 48;
    return;
}

void mostra_tabuleiro(char tabuleiro[][3]) {

    system("cls");
    printf("\nJogo da Velha:\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("-----+-----+-----\n");
    printf("  %c  |  %c  |  %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("-----+-----+-----\n");
    printf("  %c  |  %c  |  %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("     |     |\n\n");
    return;
}

void coloca_jogada(char tabuleiro[][3], int posicao, char simbolo) {
    int pos_tab[10][2] = {{0, 0}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};
// Posições da jogada:              1       2       3       4       5       6       7       8       9

    tabuleiro[pos_tab[posicao][0]][pos_tab[posicao][1]] = simbolo;
}

int ha_vitoria(char tabuleiro[][3]) {

    if (tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][0] ==  tabuleiro[0][2] ||
        tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][0] ==  tabuleiro[1][2] ||
        tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][0] ==  tabuleiro[2][2] ||
        tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[0][0] ==  tabuleiro[2][0] ||
        tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[0][1] ==  tabuleiro[2][1] ||
        tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[0][2] ==  tabuleiro[2][2] ||
        tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] ==  tabuleiro[2][2] ||
        tabuleiro[2][0] == tabuleiro[1][1] && tabuleiro[2][0] ==  tabuleiro[0][2])
        return 1;
    return 0;
}
