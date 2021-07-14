#include <stdio.h>
#include <locale.h>

int main ()
{

    int a[5]= {1, 2, 3, 4, 5};
    int b[5]= {6, 7, 8, 9, 10};
    int c[10];

    setlocale(LC_ALL, "");
        int select_f4, i, j, x;
        printf("Esta é uma opção que realiza a união dos conjuntos\n");
        printf("Resultado da união entre os dois vetores, com os números inseridos até o momento: \n");
        for (int i = 0; i < 5; i++) {
            c[i] = a[i];
        }
        for (int j = 0; j < 5; j++) {
            c[i] = b[j]; // O compilador vai mostrar que aqui há um erro!
            c[j + 5] = b[j]; // Isso seria o correto.
        }
        for (int x = 0; x < 10; x++) {
            printf("%d, ", c[x]);
        }
    }
