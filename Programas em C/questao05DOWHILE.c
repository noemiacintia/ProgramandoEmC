/*
5)Reescreva o programa do MDC, que utiliza o algoritmo de Euclides,
agora, utilizando o comando do-while em vez do comando while.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    int mdc, dividendo, divisor, resto;

    setlocale (LC_ALL, "");
    printf ("Calcula MDC entre dois inteiros\n\n");
    printf("Digite dois inteiros positivos separados por um espaço: ");
    scanf("%d %d", &dividendo, &divisor);
    do
    {
        resto=dividendo%divisor;
        dividendo    = divisor;
        divisor    = resto;
        resto = dividendo%divisor;
    }
    while(resto!=0);
    printf ("O MDC é: %d", divisor);
    return 0;
}
