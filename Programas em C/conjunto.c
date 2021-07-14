/*
  Calcula o n�mero de subconjuntos s, de r elementos, numa combina��o matem�tica simples
  para um conjunto U de n elementos
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int r, n, fator, n_menos_r, num_subconjuntos;
    long long int n_fatorial, r_fatorial, n_menos_r_fatorial;

    setlocale(LC_ALL, "");
    printf("Calcula o n�mero de subconjuntos numa combina��o matem�tica simples:\n\n");
    printf("Informe o n�mero de elementos do conjunto U(n): ");
    scanf("%d", &n);
    printf("Informe o n�mero de elementos dos subconjuntos s(r): ");
    scanf("%d", &r);
    n_fatorial = 1;
    for (fator = 1; fator <= n; fator++)
        n_fatorial *= fator;
    r_fatorial = 1;
    for (fator = 1; fator <= r; fator++)
        r_fatorial *= fator;
    n_menos_r = n - r;
    n_menos_r_fatorial = 1;
    for (fator = 1; fator <= n_menos_r; fator++)
        n_menos_r_fatorial *= fator;
    num_subconjuntos = n_fatorial / (r_fatorial * n_menos_r_fatorial);
    printf("\nN�meros de subconjuntos = %d\n\n", num_subconjuntos);
    return 0;
}
