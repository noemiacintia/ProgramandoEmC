/*
    Geração de 10 números inteiros pseudo-aleatórios entre 1 e 100

    - Utiliza as funções srand() e rand() da biblioteca stdlib (tem que incluir stdlib.h)

    - srand()  recebe um valor inicial para o cálculo da sequêcia de números aleatórios
      gerados por cada chamada da função rand()

    - rand() retorna um valor aleatório inteiro entre 0 e RAND_MAX

    - RAND_MAX tem o valor 32767

*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 10 // Onde aparecer LIMITE, será substituído por 10, antes da compilação

int main() {
    int contador;

    setlocale(LC_ALL, "");
    // Cria um valor inicial imprevisível para a sequência de números aleatórios
    // Basta executar uma vez
    srand(time(NULL)); // A função time() com o argumento NULL, retorna o número
                       // de segundos decorridos desde a compilação
    printf("Geração de 10 números inteiros pseudo-aleatórios entre 1 e 100:\n\n"
           "Obs.: A cada execução do programa, teremos uma sequência diferente.\n\n");
    printf("Valor aleatório máximo = %d\n\n", RAND_MAX);
    for (contador = 1; contador <= LIMITE; contador++) {
        // rand() retorna um número aleatório entre 1 e 100
        // o resto de uma divisão por 100 está entre 0 e 99
        // o resto da divisão somado a 1 resulta em inteiros entre 1 e 100
        printf("%d\n", rand() % 100 + 1);
    }
    return 0;
}
