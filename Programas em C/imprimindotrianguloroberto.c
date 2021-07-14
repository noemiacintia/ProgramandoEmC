/*
  Exercício 9
  Algoritmo:0
   - Solicitar o número de linhas;
   a)
    - Repetir tantas vezes quanto o número de linhas;
        - Repetir tantas vezes quanto o número da linha atual;
            - Escreva um(1) asterisco;
        - Mude de linha.

    b)
    - Repetir tantas vezes quanto o número de linhas;
    - Repetir tantas vezes quanto necessário(número de linhas - número de linha);
        - Escrever um espaço;
        - Repetir tantas vezes quanto o número da linha atual;
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
    printf("Desenho dos triângulos do exercício 9\n");
    printf("\nInforme o número de linhas do triângulo: ");
    scanf("%d", &num_linhas);
    printf("\n");
    printf("\nDesenho do triângulo a)\n\n");
    for (linha = 1; linha <= num_linhas; linha++)
    {
        for (espacos = num_linhas; espacos <= num_linhas; espacos++)
            printf(" ");
        for (asteriscos = 1; asteriscos <= linha; asteriscos++)
            printf("*");
        printf("\n");
    }
    printf("\nDesenho do triângulo b)\n\n");
    printf("\n");
    for (linha = 1; linha <= num_linhas; linha++)
    {
        for (espacos = 1; espacos <= num_linhas - linha; espacos++)
            printf(" ");
        for (asteriscos = 1; asteriscos <= linha; asteriscos++)
            printf("*");
        printf("\n");
    }
    printf("Desenho do triângulo c)\n\n");
    printf("\n");
    for (linha = 1; linha <= num_linhas; linha++){
        for (asteriscos = num_linhas; asteriscos >= linha; asteriscos--)
            printf("*");
            printf("\n");
    }
    printf("Desenho do triângulo d)\n\n");
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
