/*
    Exercício 2
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int sistolica, diastolica;

	setlocale(LC_ALL, "");
	printf("Verifica se um indivíduo participará de um experimento,\n"
           "em função de suas pressões sitólica e diastólica:\n");
	printf("\nInforme o valor da pressão sistólica do indivíduo: ");
	scanf("%d", &sistolica);
	printf("\nInforme o valor da pressão diastólica do indivíduo: ");
	scanf("%d", &diastolica);
	if (sistolica <= 120 && diastolica <= 80)
        printf("\nEste indivíduo é um candidato para o experimento!\n");
	else
        printf("\nEste indivíduo não é um candidato para o experimento!\n");
	return 0;
}
