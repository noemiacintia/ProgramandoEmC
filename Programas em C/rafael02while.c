#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int parcela,  soma =0, n;
    printf("o programa soma inteiros positivos e para quando encontra negativo ou zero\n\n");
    printf("determine o numero q vc deseja q seja o divisor\n");
    scanf("%d", &n);
    printf("determine o primeiro valor que deseja calcular\n");
    scanf("%d", &parcela);
    while (parcela % n != 0)
    {
        soma += parcela;
        printf("determine outro valor que deseja calcular\n");
        scanf("%d", &parcela);
    }
    printf("\no total calculado é: %d", soma);
    return 0;
}
