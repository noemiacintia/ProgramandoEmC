// Autor: No�mia C�ntia Sales Santos da Silva

#include <stdio.h>
#include <locale.h>

int main (){
    int a, b, trocando_variaveis;
    setlocale(LC_ALL, "");
    printf("O programa troca os valores de a e b\n"
            "apenas se A for maior que B:\n\n");
    printf("\nInforme o valor de A e B, separados por um espa�o: ");
    scanf("%d %d", &a, &b);
    printf("\nANTES\n\tA: %d\n\tB: %d\n", a, b);
    if (a > b) {
        trocando_variaveis = a;
        a = b;
        b = trocando_variaveis;
        printf("\nDEPOIS\n\tA: %d\n\tB: %d\n", a, b);
    }
    else
        printf("\nA � menor ou igual a B. N�o houve troca.\n\n");
    return 0;
}
