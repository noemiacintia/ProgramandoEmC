/* 3)Estenda o programa anterior para mostrar se determinado
valor está ou não presente no array, usando uma função diferente para cada ação. */
/* 2) Escreva um programa em C para gerar aleatoriamente os elementos de um array
   de 50 inteiros, com valores entre 1 e 100, sem permitir repetições, e, em seguida,
   mostrar o array gerado, usando uma função diferente para cada ação. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define NUM_ELEMENTOS 50
#define INICIO 1
#define FIM 100
#define VERDADEIRO 1
#define FALSO 0

int gera_elemento(int, int);
void gera_array(int[], int);
void mostra_elementos(int[], int);
int pertence_ao_array(int, int[], int);
int esta_no_array(int[], int, int);

int main()
{
    int meu_array[NUM_ELEMENTOS], elemento;

    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Gera um array com inteiros aleatorios, sem repetições:\n\n");
    gera_array(meu_array, NUM_ELEMENTOS);
    printf("Array gerado:\n");
    mostra_elementos(meu_array, NUM_ELEMENTOS);
    printf("Que elemento você gostaria de saber se está no array? ");
    scanf("%d", &elemento);
    printf("\n\t0 - Não está no array\n\t1 - Está no array\n");
    printf("\tResultado: %d\n\n", esta_no_array(meu_array, elemento, NUM_ELEMENTOS));
    return 0;
}
// Gera um valor aleatório entre inicio e fim, inclusive
int gera_elemento(int inicio, int fim)
{

    return rand() % (fim - inicio + 1) + inicio;
}
// Preenche o array com inteiros entre 1 e 100, sem repetições
void gera_array(int array[], int elementos)
{
    int indice, valor;

    for (indice = 0; indice <= elementos - 1; ++indice)
    {
        // Gera um novo valor equanto este já se encontrar no array
        // indice funciona também como o número de elementos já colocados no array
        do
        {
            valor = gera_elemento(INICIO, FIM);
        }
        while(pertence_ao_array(valor, array, indice));
        array[indice] = valor;
    }
    return;
}
// Mostra os N elementos do array de inteiros
void mostra_elementos(int array_int[], int num_eltos)
{

    for (int indice = 0; indice <= num_eltos - 1; ++indice)
    {
        printf("%3d  ", array_int[indice]);
        // Muda de linha quando a posição do elemento (indice + 1) for múltiplo de 10
        if ((indice + 1) % 10 == 0)
            printf("\n");
    }
    return;
}
// Verifica se determinado valor inteiro está presente num array
int pertence_ao_array(int procurado, int array[], int elementos)
{
    int indice;

    for (indice = 0; indice <= elementos - 1; ++indice)
        if (procurado == array[indice])
            return VERDADEIRO;
    return FALSO;
}
int esta_no_array(int array[], int elemento, int elementos)
{
    int indice;

    for (indice = 0; indice <= elementos - 1; ++indice)
        if (elemento == array[indice])
            return VERDADEIRO; // Retorna VERDADEIRO assim que encontra uma igualdade
    return FALSO; // Retorna FALSO, no final, se não encontrou igualdade
}
