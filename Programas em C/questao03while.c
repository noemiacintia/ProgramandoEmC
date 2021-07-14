#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int mdc, dividendo, divisor, resto;

    setlocale (LC_ALL, "");
    printf ("Calcula MDC entre dois inteiros\n\n");
    printf("Digite dois inteiros positivos separados por um espaço: ");
    scanf("%d %d", &dividendo, &divisor);
    resto=dividendo%divisor;
    while(resto!=0)
    {
        dividendo    = divisor;
        divisor    = resto;
        resto = dividendo%divisor;
    }
    printf ("O MDC é: %d", divisor);
    return 0;
}
