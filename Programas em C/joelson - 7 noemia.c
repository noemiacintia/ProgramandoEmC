/* Tres amigos jogaram na loteria. Caso eles ganhem,
o prêmio deve ser repartido proporcionalmente ao
valor que cada deu para a realização da aposta.
Faça um programa que leia quanto cada apostador investiu,
o valor do prêmio, e imprima quanto cada um  ganharia do
prêmio com base no valor investido. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    float valor_investido1, valor_investido2, valor_investido3, valor_investido_total;
    float premio, valor_recebido1, valor_recebido2, valor_recebido3;
    int contador, investidores;

    printf("Premio R$ ");
    scanf("%f", &premio);
    printf("Quantos serão os investidores?\n");
    scanf("%d", investidores);
    for (contador = 1; contador <= investidores; contador++){
        printf("%d Investidor = R$ ", contador);
        scanf("%f", investidores);
        valor_investido_total += investidores;
    }
        valor1 = contador;
    printf("Valor investido por cada pessoa: ");
    printf("Valor1 R$ ");
    scanf("%f", &valor_investido1);
    printf("Valor2 R$ ");
    scanf("%f", &valor_investido2);
    printf("Valor3 R$ ");
    scanf("%f", &valor_investido3);
    valor_investido_total = valor_investido1 + valor_investido2 + valor_investido3;
    valor_recebido1 = premio * valor_investido1 / valor_investido_total;
    valor_recebido2 = premio * valor_investido2 / valor_investido_total;
    valor_recebido3 = premio * valor_investido3 / valor_investido_total;
    system("cls");
    printf("\n\nPrêmio: %.2f\n", premio);
    printf("Valor recebido por cada pessoa: ");
    printf("\nValor1 R$ %.2f", valor_recebido1);
    printf("\nValor2 R$ %.2f", valor_recebido2);
    printf("\nValor3 R$ %.2f", valor_recebido3);
    return 0;
}

