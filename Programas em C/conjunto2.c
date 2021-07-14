/*
  Calcula o n�mero de subconjuntos s, de r elementos, numa combina��o matem�tica simples
  para um conjunto U de n elementos, utilizando uma fun��o do usu�rio
*/
#include <stdio.h>
#include <locale.h>

long long int fatorial(int);

int main() {
    int r, n, num_subconjuntos;

    setlocale(LC_ALL, "");
    printf("Calcula o n�mero de subconjuntos s, de r elementos, numa combina��o"
           "matem�tica simples\npara um conjunto U de n elementos:\n\n");
    printf("Informe o n�mero de elementos do conjunto U(n): ");
    scanf("%d", &n);
    printf("Informe o n�mero de elementos dos subconjuntos s(r): ");
    scanf("%d", &r);
    num_subconjuntos = fatorial(n) / (fatorial(r) * fatorial(n - r));
    printf("\nN�meros de subconjuntos = %d\n\n", num_subconjuntos);
    return 0;
}
/*
  Fun��o para c�lculo  de um fatorial
*/
long long int fatorial(int numero) {
    long long int fat = 1;
    int fator;

    for (fator = 1; fator <= numero; fator++)
        fat *= fator;
    return fat;
}
