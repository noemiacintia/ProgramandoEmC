/* Tres amigos jogaram na loteria. Caso eles ganhem,
o pr�mio deve ser repartido proporcionalmente ao
valor que cada deu para a realiza��o da aposta.
Fa�a um programa que leia quanto cada apostador investiu,
o valor do pr�mio, e imprima quanto cada um  ganharia do
pr�mio com base no valor investido. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
    float valor_investido1, valor_investido2, valor_investido3, valor_investido_total;
    float premio, valor_recebido1, valor_recebido2, valor_recebido3;

    printf("Premio R$ ");
    scanf("%f", &premio);
    printf("Quanto querem investir? \n\n");
    printf("1� Investidor = R$ ");
    scanf("%f", &valor_investido1);
    printf("2� Investidor = R$ ");
    scanf("%f", &valor_investido2);
    printf("3� Investidor = R$ ");
    scanf("%f", &valor_investido3);
    valor_investido_total = valor_investido1 + valor_investido2 + valor_investido3;
    valor_recebido1 = premio * valor_investido1 / valor_investido_total;
    valor_recebido2 = premio * valor_investido2 / valor_investido_total;
    valor_recebido3 = premio * valor_investido3 / valor_investido_total;
    system("cls");
    printf("\n\nPr�mio: %.2f\n", premio);
    printf("Valor recebido por cada investidor:\nInvestidor 01 = R$ %.2f\n"
           "Investidor 02 = R$ %.2f\nInvestidor 03 = R$ %.2f\nInvestimento Total = R$ %.2f\n",
           valor_investido1, valor_investido2, valor_investido3, valor_investido_total);
    return 0;
}
