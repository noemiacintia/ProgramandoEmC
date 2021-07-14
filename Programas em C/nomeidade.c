/* Faça um programa imprima seu nome, sua idade e seu curso. */

#include <stdio.h>
#include <locale.h>

int main()
{
    char nome[100], sobrenome[100], primeiro_nome[100], segundo_nome[100];
    int idade;

    setlocale(LC_ALL, "");
    printf("Digite seu nome e sobrenome:\n");
    scanf("%s %s", &nome, &sobrenome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite seu curso:\n");
    scanf("%s %s", &primeiro_nome, &segundo_nome);
    system("cls");
    printf("Seu nome é: %s %s\n", nome, sobrenome);
    printf("Sua idade: %d\n", idade);
    printf("Seu curso é: %s %s\n", primeiro_nome, segundo_nome);
    return 0;
}
