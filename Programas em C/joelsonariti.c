/* Escreva um programa que receba quatro n�meros e calcule
 a m�dia aritm�tica, a soma e o produto de todos os n�meros
 e exiba o resultado na tela. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    float media_aritmetica = 0, soma = 0, produto = 1, numero;
    int  contador, quantidade_de_numeros;

    setlocale(LC_ALL, "");
    printf("Calcula a m�dia aritm�tica, a soma e o produto de X n�meros:\n\n");
    printf("Informe a quantidade de n�meros que quer calcular:\n");
    scanf("%d", &quantidade_de_numeros);
    for (contador = 1; contador <= quantidade_de_numeros; contador++){
        printf("%d� n�mero: ", contador);
        scanf("%f", &numero);
        soma += numero;
        produto *= numero;
    }
    media_aritmetica = soma/quantidade_de_numeros;
    printf("M�dia Aritmetica = %.2f\nSoma = %.2f\nProduto = %.2f\n\n", media_aritmetica, soma, produto);
    return 0;
}
