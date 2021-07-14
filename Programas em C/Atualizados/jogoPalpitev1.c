// Autor: Noêmia Cíntia Sales Santos da Silva

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, valor;
    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Acerte o número entre 0 e 100\n\n");
    // função que vai sortear o número entre 0 e 100
    numero = rand() % 100 + 1;
    printf("Sorteando...\n\n");
    system("pause");
    while (valor != numero){
        printf("\n\tQual é o número? ");
        scanf("%d", &valor);
        if (valor > numero)
            printf("\nPalpite muito alto!\n");
        if (valor < numero)
            printf("\nPalpite muito baixo!\n");
    }
    printf("\n\nParabéns você acertou!!!!!!\n\n");
    return 0;
}
