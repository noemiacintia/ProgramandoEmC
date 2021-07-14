/* Exemplo da aula */

#include <stdio.h>
#include <locale.h>

long long int fatorial (int);

int main ()
{
    int r, n, num_subconjuntos;

    setlocale (LC_ALL, "");
    printf("Calcula o número de subconjuntos s, de r elementos, numa combinação\n"
           "matemática simples para um conjunto U de n elementos:\n\n");
    printf("Informe o número de elementos do conjunto U(n): ");
    scanf("%d", &n);
    printf("Informe o número de elementos dos subconjuntos s(r): ");
    scanf("%d", &r);
    printf("Número de subconjuntos = %d\n\n", fatorial(n) / (fatorial(r) * fatorial(n-r)));
    return 0;
}
    long long int fatorial (int numero){
    long long int fat = 1;
    int fator;

    for (fator = 1; fator <= numero; fator++)
        fat *= fator;
    return fat;
    }
