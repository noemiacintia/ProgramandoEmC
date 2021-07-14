/* Autor: No�mia C�ntia Sales Santos da Silva

Enunciado: Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e
imprima o m�s correspondente a este n�mero. Isto e, janeiro se 1, fevereiro
se 2, e assim por diante. */

#include <stdio.h>
#include <locale.h>

int main (){
    int mes;
    setlocale (LC_ALL,"");
    printf("Informe um m�s de 1-12: ");
    scanf("%d", &mes);
    switch(mes){
    case 1:
        printf("\nJaneiro\n");
        break;
    case 2:
        printf("\nFevereiro\n");
        break;
    case 3:
        printf("\nMar�o\n");
        break;
    case 4:
        printf("\nAbril\n");
        break;
    case 5:
        printf("\nMaio\n");
        break;
    case 6:
        printf("\nJunho\n");
        break;
    case 7:
        printf("\nJulho\n");
        break;
    case 8:
        printf("\nAgosto\n");
        break;
    case 9:
        printf("\nSetembro\n");
        break;
    case 10:
        printf("\nOutubro\n");
        break;
    case 11:
        printf("\nNovembro\n");
        break;
    case 12:
        printf("\nDezembro\n");
    }
    return 0;
}
