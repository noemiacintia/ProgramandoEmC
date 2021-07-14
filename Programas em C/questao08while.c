/* 8)Um “Número de Armstrong” de n dígitos é aquele que é igual a soma das potências de seus dígitos com expoente n
Exemplo: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27
Mostre os números de Armstrong menores que M.
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    int inteiro, expoente, copia, soma, potencia, vezes, base, m;

    setlocale(LC_ALL, "");
    printf("Mostra os números de Armstrong menores que M:\n\n");
    printf("Digite o número inteiro positivo M: ");
    scanf("%d", &m);
    for (inteiro = 1; inteiro < m; inteiro++) {
    copia = inteiro;
    expoente = 0;
        while (inteiro > 0)
        {
            expoente++;
            inteiro /= 10;
        }
        inteiro = copia;
        soma = 0;
        while (inteiro > 0)
        {
            base = inteiro % 10;
            for (potencia = 1, vezes = 1; vezes <= expoente; vezes++)
                potencia = potencia * base;
            soma = soma + potencia;
            inteiro/=10;
        }
        inteiro = copia;
        if (inteiro == soma)
            printf("%d\n", inteiro);
    }
    return 0;
}
