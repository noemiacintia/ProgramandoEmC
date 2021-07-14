#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int mdc, dividendo, divisor, resto, dividendo_antigo, divisor_antigo;

    setlocale (LC_ALL, "");
    printf ("Calcula MDC entre dois inteiros\n\n");
    printf("Digite dois inteiros positivos separados por um espaço: ");
    scanf("%d %d", &dividendo, &divisor);
    resto=dividendo%divisor;
    dividendo_antigo = dividendo;
    divisor_antigo = divisor;
    while(resto!=0)
    {
        dividendo    = divisor;
        divisor    = resto;
        resto = dividendo%divisor;
    }
    printf ("O MDC entre %d e %d é: %d", dividendo_antigo, divisor_antigo, divisor);
    return 0;
}
