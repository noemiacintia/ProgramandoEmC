/*  ​Tendo em mente o conceito de algoritmo e fluxograma. Monte um fluxograma
para um programa, que receba três notas, calcule a média e informe se o usuário
foi aprovado ou reprovado. Considere como média 7.
------------------------------------------------------------------------------------
Programa acima reformulado calculando para quantidade de notas X.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    float  nota, media = 0, soma = 0;
    int quantidade_de_notas, contador;

    setlocale(LC_ALL, "");
    printf("O programa calcula a média de X notas:\n\n");
    printf("Quantidade de notas para calcular a média: \n"); // o usuário informa quantas notas são
    scanf("%d", &quantidade_de_notas); // endereço da quantidade de notas
    for (contador = 1; contador <= quantidade_de_notas; contador++)
    {
        printf("Nota %d:\n", contador); // o usuário informará as 3 notas
        scanf("%f", &nota); // endereço das três notas
        soma += nota; // guardando a soma das notas na variável soma. como zerei soma na declaração da variável a primeira soma
                    // será a nota digitada pelo usuário + 0 que vai ser igual a nota digitada pelo usuário
    }
    media = soma/quantidade_de_notas; // calculando a média
    if (media >= 7) // se média maior ou igual a 7
        printf("\n\tAluno aprovado com média = %.1f\n\n", media);
    else // se média menor que 7
        printf("\n\tAluno reprovado com média = %.1f\n\n", media);
    return 0;
}
