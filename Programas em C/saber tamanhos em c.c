#include <stdio.h>
#include <locale.h>


// Analisa o uso do sizeof

int main ()
{
    int inteiro, array[30];
    float real;
    double real_duplo;
    char caractere;
    long long int inteiro_muito_longo;

    setlocale(LC_ALL, "");
    printf("Verifica o tamanho dos objetos na linguagem C:\n\n");
    printf("Inteiro = %d bytes\n", sizeof(inteiro));
    printf("Real = %d bytes\n", sizeof(real));
    printf("Real_duplo = %d bytes\n", sizeof(real_duplo));
    printf("Caractere = %d bytes\n", sizeof(caractere));
    printf("Inteiro_muito_longo = %d bytes\n", sizeof(inteiro_muito_longo));
    printf("\n\nTESTANDO COM O NÚMERO:\n");
    printf("17 = %d bytes\n", sizeof(17));
    printf("1.75268 = %d bytes\n", sizeof(1.75268));
    printf("\'@\' = %d bytes\n", sizeof('@'));
    printf("\n\nTESTANDO COM O NOME:\n");
    printf("Inteiro = %d bytes\n", sizeof(int));
    printf("Real = %d bytes\n", sizeof(float));
    printf("Real_duplo = %d bytes\n", sizeof(double));
    printf("Caractere = %d bytes\n", sizeof(char));
    printf("Inteiro_muito_longo = %d bytes\n", sizeof(long long int));
    printf("\n\nTESTANDO COM O ARRAY:\n");
    printf("Array = %d bytes\n", sizeof(array));

    return 0;
}
