#include <stdio.h>
#include <locale.h>

int main ()
{
    int inteiro, invertido = 0;

    setlocale(LC_ALL, "");
    printf("Programa que recebe um inteiro positivo\n"
           "e mostra-o com seus d�gitos invertidos:\n\n");
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &inteiro);
    while (inteiro > 0)
    {
        invertido = invertido * 10 + inteiro % 10;
        inteiro = inteiro / 10;
    }
    printf("N�mero com os d�gitos invertidos: %d\n\n", invertido);
    return 0;
}
