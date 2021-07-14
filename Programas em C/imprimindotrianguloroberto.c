/*
  Exerc�cio 9
  Algoritmo:0
   - Solicitar o n�mero de linhas;
   a)
    - Repetir tantas vezes quanto o n�mero de linhas;
        - Repetir tantas vezes quanto o n�mero da linha atual;
            - Escreva um(1) asterisco;
        - Mude de linha.

    b)
    - Repetir tantas vezes quanto o n�mero de linhas;
    - Repetir tantas vezes quanto necess�rio(n�mero de linhas - n�mero de linha);
        - Escrever um espa�o;
        - Repetir tantas vezes quanto o n�mero da linha atual;
            - Escreva um(1) asterisco;
        - Mude de linha.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num_linhas, linha, espacos, asteriscos;

    setlocale(LC_ALL, "");
    printf("Desenho dos tri�ngulos do exerc�cio 9\n");
    printf("\nInforme o n�mero de linhas do tri�ngulo: ");
    scanf("%d", &num_linhas);
    printf("\n");
    printf("\nDesenho do tri�ngulo a)\n\n");
    for (linha = 1; linha <= num_linhas; linha++)
    {
        for (espacos = num_linhas; espacos <= num_linhas; espacos++)
            printf(" ");
        for (asteriscos = 1; asteriscos <= linha; asteriscos++)
            printf("*");
        printf("\n");
    }
    printf("\nDesenho do tri�ngulo b)\n\n");
    printf("\n");
    for (linha = 1; linha <= num_linhas; linha++)
    {
        for (espacos = 1; espacos <= num_linhas - linha; espacos++)
            printf(" ");
        for (asteriscos = 1; asteriscos <= linha; asteriscos++)
            printf("*");
        printf("\n");
    }
    printf("Desenho do tri�ngulo c)\n\n");
    printf("\n");
    for (linha = 1; linha <= num_linhas; linha++){
        for (asteriscos = num_linhas; asteriscos >= linha; asteriscos--)
            printf("*");
            printf("\n");
    }
    printf("Desenho do tri�ngulo d)\n\n");
    printf("\n");
    for (linha = num_linhas; linha >= 1; linha--){
        for ( espacos = 0; espacos < (num_linhas - linha); espacos++ )
            printf(" ");
        for ( asteriscos = 1; asteriscos <= linha; asteriscos++ )
            printf("*");
            printf("\n");
    }
    return 0;
}
