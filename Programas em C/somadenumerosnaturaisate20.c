#include <stdio.h>
#include <locale.h>

int main ()
{
    int contador, soma, n, a1, an;

    setlocale(LC_ALL, "");
    printf("Soma de n�meros naturais at� 20: ");
    soma = (20 * (20 + 1)) / 2;
    printf("\nA soma �: %d", soma);
return 0;
}
