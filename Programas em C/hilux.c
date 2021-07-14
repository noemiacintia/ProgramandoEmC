/*
  Exercício 10) Movimenta uma caminhonete na tela
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
    int posicao, espacos, espera;

    setlocale(LC_ALL, "");
    system("pause");
    for (posicao = 1; posicao <= 80; posicao++) {
        system("cls");
        printf("\n\n");
        for (espacos = 1; espacos <= posicao; espacos++)
            printf(" ");
        printf("                  ______\n");
        for (espacos = 1; espacos <= posicao; espacos++)
            printf(" ");
        printf("                  ||    \\\n");
        for (espacos = 1; espacos <= posicao; espacos++)
            printf(" ");
        printf("       +----------++-----+------0\n");
        for (espacos = 1; espacos <= posicao; espacos++)
            printf(" ");
        printf("       O  __   ||     | __ \\\n");
        for (espacos = 1; espacos <= posicao; espacos++)
            printf(" ");
        switch (posicao % 3) {
            case 1:
                printf("   O o=+-+ (O) +--++-----++ (O) +-+\n");
                break;
            case 2:
                printf("  O o =+-+ (O) +--++-----++ (O) +-+\n");
                break;
            case 0:
                printf(" O o  =+-+ (O) +--++-----++ (O) +-+\n");
        }
    }
    return 0;
}

