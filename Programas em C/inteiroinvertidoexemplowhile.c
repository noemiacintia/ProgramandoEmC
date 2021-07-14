#include <stdio.h>
#include <locale.h>

int main ()
{
    int inteiro, invertido = 0;

    setlocale(LC_ALL, "");
    printf("Programa que recebe um inteiro positivo\n"
           "e mostra-o com seus dígitos invertidos:\n\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &inteiro);
    while (inteiro > 0)
    {
        invertido = invertido * 10 + inteiro % 10;
        inteiro = inteiro / 10;
    }
    printf("Número com os dígitos invertidos: %d\n\n", invertido);
    return 0;
}
