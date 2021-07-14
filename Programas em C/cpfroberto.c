#include <stdio.h>
#include <locale.h>

int main() {
    int codigo, d1, d2, d3, d4, d5, d6, d7, d8, d9, soma, resto, digito1, digito2;

    setlocale(LC_ALL, "");
    printf("Calcula o d�gito verificador de um c�digo de CPF (Cadastro de Pessoa F�sica):\n\n");
    printf("Informe o c�digo do CPF, sem os d�gitos verificadores (9 d�gitos):\n");
    scanf("%d", &codigo);
    // Separa os d�gitos da direita para a esquerda
    d1 = codigo % 10;
    d2 = codigo % 100 / 10;
    d3 = codigo % 1000 / 100;
    d4 = codigo % 10000 / 1000;
    d5 = codigo % 100000 / 10000;
    d6 = codigo % 1000000 / 100000;
    d7 = codigo % 10000000 / 1000000;
    d8 = codigo % 100000000 / 10000000;
    d9 = codigo / 100000000;
    // C�lculo do primeiro d�gito verificador pelo m�todo M�dulo 11
    soma = d1 * 2 + d2 * 3 + d3 * 4 + d4 * 5 + d5 * 6 + d6 * 7 + d7 * 8 + d8 * 9 + d9 * 10;
    resto = soma % 11;
    digito1 =  resto < 2 ? 0 : 11 - resto;
    // C�lculo do segundo d�gito verificador pelo m�todo M�dulo 11
    soma = digito1 * 2 + d1 * 3 + d2 * 4 + d3 * 5 + d4 * 6 + d5 * 7 + d6 * 8 + d7 * 9 + d8 * 10 + d9 * 11;
    resto = soma % 11;
    digito2 =  resto < 2 ? 0 : 11 - resto;
    // O 0(zero) no especificador de formato ("%09d" e "%02d") faz mostrar os zeros n�o significativos do valores das vari�veis
    // O 8 no especificador de formato ("%09d") faz mostrar 8 d�gitos do valor da vari�vel c�digo
    // O 1 no especificador de formato ("%02d") faz mostrar os 2 d�gitos verificadores
    printf("\nC�digo do CPF com os d�gitos verficadores: %09d-%02d\n", codigo, digito1 * 10 + digito2);
    return 0;
}
