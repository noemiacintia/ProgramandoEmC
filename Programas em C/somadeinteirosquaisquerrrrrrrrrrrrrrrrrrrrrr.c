#include <stdio.h>
#include <stdlib.h>
int main()
{
	int quantidade, numero, soma;
	printf("Soma de n numeros inteiros\n\n");
	printf("Informe a quantidade de números inteiros\n");
	scanf("%d",&quantidade);
	printf("Informe %d numero(s)\n",quantidade);
	for(quantidade; quantidade>0; quantidade--){
	scanf("%d", &numero);
    soma = soma + numero;
	}
	printf("A soma eh: %d",soma);
	return 0;
}
