/*
    Gera��o de 10 n�meros inteiros pseudo-aleat�rios entre 1 e 100

    - Utiliza as fun��es srand() e rand() da biblioteca stdlib (tem que incluir stdlib.h)

    - srand()  recebe um valor inicial para o c�lculo da sequ�cia de n�meros aleat�rios
      gerados por cada chamada da fun��o rand()

    - rand() retorna um valor aleat�rio inteiro entre 0 e RAND_MAX

    - RAND_MAX tem o valor 32767

*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 10 // Onde aparecer LIMITE, ser� substitu�do por 10, antes da compila��o

int main() {
    int contador;

    setlocale(LC_ALL, "");
    // Cria um valor inicial imprevis�vel para a sequ�ncia de n�meros aleat�rios
    // Basta executar uma vez
    srand(time(NULL)); // A fun��o time() com o argumento NULL, retorna o n�mero
                       // de segundos decorridos desde a compila��o
    printf("Gera��o de 10 n�meros inteiros pseudo-aleat�rios entre 1 e 100:\n\n"
           "Obs.: A cada execu��o do programa, teremos uma sequ�ncia diferente.\n\n");
    printf("Valor aleat�rio m�ximo = %d\n\n", RAND_MAX);
    for (contador = 1; contador <= LIMITE; contador++) {
        // rand() retorna um n�mero aleat�rio entre 1 e 100
        // o resto de uma divis�o por 100 est� entre 0 e 99
        // o resto da divis�o somado a 1 resulta em inteiros entre 1 e 100
        printf("%d\n", rand() % 100 + 1);
    }
    return 0;
}
