/*
    Exerc�cio 1
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int a, b, auxiliar;

	setlocale(LC_ALL, "");
	printf("Executa a troca do conte�do de duas vari�veis, a e b,\n"
           "caso o valor de a seja maior que o valor de b:\n");
	printf("\nInforme os valores inteiros para as vari�veis a e b, separados por um espa�o: ");
	scanf("%d %d", &a, &b);
	printf("\nAntes: a = %d e b = %d", a, b);
	// Executa a troca, se necess�rio
	if (a > b) {
        auxiliar = a;
        a = b;
        b = auxiliar;
	}
	printf("\n\nDepois: a = %d e b = %d\n", a, b);
	return 0;
}
