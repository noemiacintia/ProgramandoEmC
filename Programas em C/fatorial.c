#include <stdio.h>
#include <locale.h>

int main (){
    int numero, fatorial, fator;

    setlocale (LC_ALL, "");
    printf("Calcula o fatorial de um n�mero natural:\n\n");
    printf("Informe um n�mero natural: ");
    scanf("%d", &numero);
    for (fatorial = 1, fator = 1; fator <= numero; fator++)
        fatorial = fatorial * fator;
    printf("\nO fatorial de %d � %d\n", numero, fatorial);
return 0;
}
