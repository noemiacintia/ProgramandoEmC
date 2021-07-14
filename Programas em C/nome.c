/* Faça um programa imprima Hello Word. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    char nome[61], curso[61];
    int idade, contador, contador2;

    setlocale(LC_ALL, "");
    printf("Digite seu nome: \n\n");
    scanf("%s ", &nome);
    printf("Qual sua idade?");
    scanf("%d", &idade);
    printf("Qual seu curso?");
    system("cls");
    printf("\n\n");
    for (contador = 0; contador <= nome[61]; contador++)
    {
        printf("Nome: %s", nome)
    }
    printf("\n\nNome: ", nome);
    printf("\nIdade: %d", idade);
    for (contador2 = 0; contador2 <= curso[61]; contador2++)
    {
        scanf("%s ", &curso);
    }
    printf("Curso: ", curso);
    getch();
    return 0;
}
