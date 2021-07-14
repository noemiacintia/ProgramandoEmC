#include <stdio.h>
#include <locale.h>

int main (){
    int numero, fatorial, fator;

    setlocale (LC_ALL, "");
    printf("Calcula o fatorial de um número natural:\n\n");
    printf("Informe um número natural: ");
    scanf("%d", &numero);
    for (fatorial = 1, fator = 1; fator <= numero; fator++)
        fatorial = fatorial * fator;
    printf("\nO fatorial de %d é %d\n", numero, fatorial);
return 0;
}
