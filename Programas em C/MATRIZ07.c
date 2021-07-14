/*
  7) Movimentos do cavalo - Faça um programa que receba, utilizando a  notação  algébrica  do  xadrez (letra
     da coluna seguida do número da linha), a posição de um cavalo no tabuleiro e mostre na tela o tabuleiro
     e as posições para as quais este cavalo pode se movimentar, utilizando asteriscos para assinalar  estas
     posições. Use uma matriz para representar o tabuleiro e os possíveis movimentos válidos.
       ---------------------------------
     8 |   |   |   |   |   |   |   |   |
       ---------------------------------
     7 |   |   |   | 2 |   | 1 |   |   |
       ---------------------------------
     6 |   |   | 3 |   |   |   | 0 |   |
       ---------------------------------
     5 |   |   |   |   | C |   |   |   |
       ---------------------------------
     4 |   |   | 4 |   |   |   | 7 |   |
       ---------------------------------
     3 |   |   |   | 5 |   | 6 |   |   |
       ---------------------------------
     2 |   |   |   |   |   |   |   |   |
       ---------------------------------
     1 |   |   |   |   |   |   |   |   |
       ---------------------------------
         A   B   C   D   E   F   G   H
     A peça do jogo de xadrez chamada cavalo se movimenta em forma de L (por duas casas  em  uma  direção  e
     depois por uma casa em uma direção perpendicular). Assim, por um  quadrado  no  meio  de  um  tabuleiro
     vazio, o cavalo pode fazer oito movimentos diferentes (numerados de 0 a 7), como mostra a figura acima.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

void inicializa_tabuleiro(char[][9]);
void desenha_tabuleiro(char[][9]);
void atualiza_tabuleiro(char[][9], char, int);

int main() {
    char tabuleiro[9][9], coluna;
    int linha;

    setlocale(LC_ALL, "");
    do {
        inicializa_tabuleiro(tabuleiro);
        desenha_tabuleiro(tabuleiro);
        printf("Informe a referência algébrica da posição do\n");
        printf("cavalo\(letra seguida de número\), para encerrar \"Z0\": ");
        fflush(stdin); // Esvazia o buffer (memória) do teclado
        scanf("%c %d", &coluna, &linha);
        coluna = toupper(coluna); // Se for letra minúscula, torna-a maiúscula
        // Encerra o programa com "Z0"
        if (coluna == 'Z'&& linha == 0)
            break;
        // Verifica se a posição do cavalo é valida
        if (coluna < 'A' ||  coluna > 'H' || linha < 1 || linha > 8) {
            printf("\nPosição inválida!\n\n");
            system("pause");
            continue; // Desvia para o teste do do-while
        }
        atualiza_tabuleiro(tabuleiro, coluna, linha);
        desenha_tabuleiro(tabuleiro);
        system("pause");
    } while (coluna != 'Z'|| linha != 0);
    printf("\n");
    return 0;
}

 // Coloca as referências de linha e coluna no tabuleiro e limpa com espaços as demais posições
void inicializa_tabuleiro(char tabuleiro[][9]) {
    int linha, coluna;

    for (linha = 0; linha < 9; linha++)
        for (coluna = 0; coluna < 9; coluna++)
            if (coluna == 0 && linha > 0)
                tabuleiro[linha][coluna] = 57 - linha; // Coloca o número da linha no tabuleiro
            else if (linha == 0 && coluna > 0)
                tabuleiro[linha][coluna] = 64 + coluna; // Coloca a letra da coluna no tabuleiro
            else
                tabuleiro[linha][coluna] = 32; // Limpa a casa do tabuleiro
    return;
}

 // Mostra o tabuleiro na tela
void desenha_tabuleiro(char tabuleiro[][9]) {
    int linha, coluna, tracos;

    system("cls");
    printf("Mostra os possíveis movimentos de um cavalo do xadrez:\n\n");
    for (linha = 1; linha <= 8; linha++) {
        printf("   ");
        // Mostra uma linha de traços
        for (tracos = 0; tracos <= 32; tracos++)
            printf("-");
        printf("\n %c ", tabuleiro[linha][0]); // Mostra o número da linha
        // Mostra as casas de uma linha do tabuleiro
        for (coluna = 1; coluna <= 8; coluna++)
            printf("| %c ", tabuleiro[linha][coluna]);
        printf("|\n");
    }
    printf("   ");
    // Mostra uma linha de traços
    for (tracos = 0; tracos <= 32; tracos++)
        printf("-");
    printf("\n  ");
    // Mostra as letras que referenciam as colunas
    for (coluna = 1; coluna <= 8; coluna++)
        printf("   %c", tabuleiro[0][coluna]);
    printf("\n\n");
    return;
}


 // Posiciona o cavalo no tabuleiro e assinala seus possíveis movimentos
void atualiza_tabuleiro(char tabuleiro[][9], char coluna, int linha) {
// possíveis movimentos:                 0        1        2         3        4        5        6       7
    int possiveis_movimentos[8][2] = {{-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};
    int linha_cavalo, coluna_cavalo, nova_linha_cavalo, nova_coluna_cavalo, movimento;

    // Mapeia a posição algébrica para os indices da matriz-tabuleiro
    linha_cavalo = 9 - linha;
    coluna_cavalo = coluna - 64;
    // Coloca o cavalo no tabuleiro
    tabuleiro[linha_cavalo][coluna_cavalo] = 'C';
    // Assinala as possíveis posições para os movimentos do cavalo
    for (movimento = 0; movimento <= 7; ++movimento) {
        nova_linha_cavalo = linha_cavalo + possiveis_movimentos[movimento][0];
        nova_coluna_cavalo = coluna_cavalo + possiveis_movimentos[movimento][1];
        // Só assinala se a posição for dentro do tabuleiro
        if (nova_linha_cavalo >= 1 && nova_linha_cavalo <= 8 && nova_coluna_cavalo >= 1 && nova_coluna_cavalo <= 8)
            tabuleiro[nova_linha_cavalo][nova_coluna_cavalo] = '*';
    }
    return;
}
