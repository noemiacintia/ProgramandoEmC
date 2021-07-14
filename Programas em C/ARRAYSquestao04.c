/* 4)Escreva um programa em C para ler dois conjuntos de inteiros
de 10 elementos e mostrar o conjunto união destes conjuntos, utilizando
para isto uma função para cada ação. */

#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 10
#define NUM_UNIAO 20
#define VERDADEIRO 1
#define FALSO 0

void ler_elementos(int[], int);
void mostra_elementos(int[], int);
int determina_conjunto_uniao(int[], int[], int[], int);
int esta_no_array(int[], int, int);
int conjunto_uniao(int[], int, int[], int, int[]);
int esta_no_conjunto(int, int[], int);

int main ()
{
    int conjA[NUM_ELTOS], conjB[NUM_ELTOS], conjU[NUM_ELTOS + NUM_ELTOS], num_elem_uniao;

    setlocale(LC_ALL, "");
    printf("Ler dois conjuntos de inteiros de 10 elementos e mostra o conjunto união:\n\n");
    printf("Informe os %d elementos do 1º array: \n");
    ler_elementos(conjA, NUM_ELTOS);
    printf("Informe os %d elementos do 2º array: \n");
    ler_elementos(conjB, NUM_ELTOS);
    printf("Elementos do Conjunto A: \n");
    mostra_elementos(conjA, NUM_ELTOS);
    printf("Elementos do Conjunto B: \n");
    mostra_elementos(conjB, NUM_ELTOS);
    num_elem_uniao =  conjunto_uniao(conjA, NUM_ELTOS, conjB, NUM_ELTOS, conjU);
    printf("Elementos do Conjunto União: \n");
    mostra_elementos(conjU, num_elem_uniao);
    void ler_elementos(int meu_array[], int num_elementos)
    {
        int indice;

        for (indice = 0; indice <= num_elementos - 1; ++indice)
            scanf("%d", &meu_array[indice]);
        return;
    }
    void mostra_elementos(int array_int[], int num_elementos)
    {
        for (int indice = 0; indice <= num_elementos - 1; ++indice)
            printf("%d   ", array_int[indice]);
        return;
    }
// determina o conjunto união de dois inteiros
    int conjunto_uniao(int conjA[], int num_eltos_A, int conjB [], int num_eltos_B, int conjU[])
    {
        int indA, indB, indU;

        for (int indA = 0; indA <= num_eltos_A - 1; ++indA)
            conjU[indA] = conjA[indA];
        indU = indA;
        for (int indB = 0; indB <= num_eltos_B - 1; ++indB)
            if (!esta_no_conjunto(conjB[indB], conjA, num_eltos_A))
            {
                conjU[indU] = conjB[indB];
                ++indU;
            }
        return indU;
    }
    // verifica se um valor está no conjunto unuão
    int esta_no_conjunto(int procurado, int conjunto[], int num_elementos)
    {
        int indice;

        for (indice = 0; indice <= num_elementos - 1; ++indice)
            if (procurado == conjunto[indice])
                return 1;
        return 0;
    }




