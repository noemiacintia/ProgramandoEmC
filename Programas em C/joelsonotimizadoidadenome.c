/* Faça um programa imprima seu nome, sua idade e seu curso. */

#include <stdio.h>
#include <locale.h>

int main()
{
    char nome[200], curso[200];
    int idade;

    setlocale(LC_ALL, "");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu curso: ");
    fflush(stdin);
    gets(curso);
    system("cls");
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade: %d\n", idade);
    printf("Seu curso é: %s\n", curso);
    return 0;
}
