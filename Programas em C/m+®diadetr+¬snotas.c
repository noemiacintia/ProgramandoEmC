/*  ​Tendo em mente o conceito de algoritmo e fluxograma. Monte um fluxograma
para um programa, que receba três notas, calcule a média e informe se o usuário
foi aprovado ou reprovado. Considere como média 7. */

#include <stdio.h>
#include <locale.h>

int main()
{

    float  nota1, nota2, nota3, media = 0;

    setlocale(LC_ALL, "portuguese");
    printf("O programa calcula a média de três notas:\n\n");
    printf("Notas: "); // o usuário informará as 3 notas
    scanf("%f %f %f", &nota1, &nota2, &nota3); // endereço das três notas
    media = (nota1 + nota2 + nota3)/3;
    if (media <= 7)
        printf("\n\tAluno reprovado!\n\tMédia: %.2f", media);
    else
        printf("\tAluno aprovado!\n\tMédia: %.2f", media);
    return 0;
}
