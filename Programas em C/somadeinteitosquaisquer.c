
/* Algoritmo:
    - Zerar total;
    - Repetir 10 vezes
        - Solicitar um inteiro;
        - Acumular o inteiro recebido num total;
    - Mostrar o total;
 */

#include <stdio.h>
#include <locale.h>

int main ()
{
    int total = 0, contador, inteiro;

    setlocale(LC_ALL, "");
    printf("Soma de 10 inteiros quaisquer: \n\n");
    for (contador = 1; contador<=10; contador++)
    {
        printf("Informe o %dº inteiro: ", contador);
        scanf("%d", &inteiro);
        total += inteiro;
    }
    printf("A soma dos 10 inteiros é: %d", total);
    return 0;
}



