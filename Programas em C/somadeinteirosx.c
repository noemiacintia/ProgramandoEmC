/* Algoritmo:
    - Zerar total;
    - Solicitar o valor de N ao usuário;
    - Repetir N vezes
        - Solicitar um inteiro;
        - Acumular o inteiro recebido num total;
    - Mostrar o total;
 */

#include <stdio.h>
#include <locale.h>

int main ()
{
    int total = 0, contador, inteiro, quantidade_de_inteiros;

    setlocale(LC_ALL, "");
    printf("Soma de 10 inteiros quaisquer: \n\n");
    printf("Quantos inteiros você quer somar? ");
    scanf("%d", &quantidade_de_inteiros);
    for (contador = 1; contador <= quantidade_de_inteiros; contador++)
    {
        printf("Informe o %dº inteiro: ", contador);
        scanf("%d", &inteiro);
        total += inteiro;
    }
    printf("A soma dos %d inteiros é: %d", quantidade_de_inteiros, total);
    return 0;
}
