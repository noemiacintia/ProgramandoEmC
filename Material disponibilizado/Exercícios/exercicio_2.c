/*
    Exerc�cio 2
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int sistolica, diastolica;

	setlocale(LC_ALL, "");
	printf("Verifica se um indiv�duo participar� de um experimento,\n"
           "em fun��o de suas press�es sit�lica e diast�lica:\n");
	printf("\nInforme o valor da press�o sist�lica do indiv�duo: ");
	scanf("%d", &sistolica);
	printf("\nInforme o valor da press�o diast�lica do indiv�duo: ");
	scanf("%d", &diastolica);
	if (sistolica <= 120 && diastolica <= 80)
        printf("\nEste indiv�duo � um candidato para o experimento!\n");
	else
        printf("\nEste indiv�duo n�o � um candidato para o experimento!\n");
	return 0;
}
