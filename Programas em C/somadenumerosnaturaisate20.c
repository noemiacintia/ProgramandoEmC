#include <stdio.h>
#include <locale.h>

int main ()
{
    int contador, soma, n, a1, an;

    setlocale(LC_ALL, "");
    printf("Soma de números naturais até 20: ");
    soma = (20 * (20 + 1)) / 2;
    printf("\nA soma é: %d", soma);
return 0;
}
