// Programa para ler, ordenar e mostrar os N elementos de um array de inteiros
#include <stdio.h>
#include <locale.h>

#define NUM_ELTOS 100

void le_elementos(int[], int);
void mostra_elementos(int[], int);
void ordena_bolha(int[], int);
int pesquisa_linear(int, int[], int);
int pesquisa_binaria(int, int[], int);

int main() {
    int inteiros[NUM_ELTOS], n, chave_de_procura, posicao;

    setlocale(LC_ALL, "");
    printf("Lê e mostra os elementos de um array de tamanho N (máximo 100):\n\n");
    printf("Informe o valor número de elementos (N): ");
    scanf("%d", &n);
    printf("\nInforme os %d elementos do array:\n", n);
    le_elementos(inteiros, n);
    printf("Informe o valor a ser procurado no array: ");
    scanf("%d", &chave_de_procura);
    printf("\nElementos do array na ordem de leitura:\n");
    mostra_elementos(inteiros, n);
    if ((posicao = pesquisa_linear(chave_de_procura, inteiros, n)) == -1)
        printf("\nLinear: Valor não se encontra no array!\n");
    else
        printf("\nLinear: Valor se encontra na posição %d do array!\n", posicao);
    ordena_bolha(inteiros, n);
    printf("\nElementos do array em ordem crescente:\n");
    mostra_elementos(inteiros, n);
    if ((posicao = pesquisa_binaria(chave_de_procura, inteiros, n)) == -1)
        printf("\nBinária: Valor não se encontra no array!\n\n");
    else
        printf("\nBinária: Valor se encontra na posição %d do array!\n\n", posicao);
    return 0;
}
// Lê os N elementos do array de inteiros
void le_elementos(int meu_array[], int quant_eltos) {
    int indice;

    for (indice = 0; indice <= quant_eltos - 1; ++indice)
        scanf("%d", &meu_array[indice]);
    return;
}
// Mostra os N elementos do array de inteiros
void mostra_elementos(int array_int[], int num_eltos) {

    for (int indice = 0; indice <= num_eltos - 1; ++indice)
        printf("%d  ", array_int[indice]);
    return;
}
// Coloca o array em ordem crescente
void ordena_bolha(int array[], int tamanho) {
    int repete, indice, aux;

    // Repete o processo "tamanho - 1" vezes
    for (repete = 1; repete <= tamanho - 1; repete++)
        // Repete para o primeiro até o penúltimo elemento
        for (indice = 0; indice <= tamanho - 2; indice++)
            // Se o par de elementos estão em ordem decrescrente, troca
            if (array[indice] > array[indice + 1]) {
                // Troca os conteúdos do par de elementos
                aux = array[indice];
                array[indice] = array[indice + 1];
                array[indice + 1] = aux;
            }
    return;
}
// Busca no array  pelo método pesquisa linear ou sequecial
int pesquisa_linear(int procurado, int array[], int tamanho) {
    int indice;

    for (indice = 0; indice <= tamanho - 1; ++indice)
        if (procurado == array[indice])
            return indice;
    return -1;
}
// Busca no array pelo método pesquisa binária
int pesquisa_binaria(int procurado, int array[], int tamanho) {
    int inicio, meio, fim;

    inicio = 0;
    fim = tamanho - 1;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (procurado == array[meio])
            return meio;
        if (procurado < array[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return -1;
}
