/*
  7) Escreva um programa em C para simular a coleta de temperaturas m�dias inteiras di�rias,
  durante um determinado m�s em uma localidade, com temperaturas variando entre 17 e 28oC,
  e mostrar os dias em que a temperatura m�dia ficou acima da m�dia do m�s,
  utilizando para isto uma fun��o para cada a��o
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TEMP_MENOR 17
#define TEMP_MAIOR 28

void mostra_dias_acima(int[], float);
float media_temp_mes(int[]);
void preenche_temp_mes(int[]);
int gera_temperaturas(int, int);

int main() {
    int temperatura_mes[31];
    float media_temp;

    srand(time(NULL));
    setlocale(LC_ALL, "");
    printf("Mostra as temperaturas di�rias acima da m�dia mensal:\n\n");
    preenche_temp_mes(temperatura_mes);
    media_temp = media_temp_mes(temperatura_mes);
    printf("Temperatura m�dia do m�s: %.2foC\n\n", media_temp);
    mostra_dias_acima(temperatura_mes, media_temp);
    printf("\n");
    return 0;
}
// Mostra os dias cujas temperaturas m�dias di�rias est�o acima da m�dia mensal
void mostra_dias_acima(int temperatura_mes[], float media_temp) {

    printf("Dias com temperatura m�dia al�m da m�dia mensal:\n");
    for (int dia = 1; dia <= 30; ++dia)
        if (temperatura_mes[dia] > media_temp)
            printf("%2d(%2doC)\n", dia, temperatura_mes[dia]);
    return;
}
// Calcula a media mensal de temperaturas
float media_temp_mes(int temperatura_mes[]){
    int soma_temp = 0;

    for (int dia = 1; dia <= 30; ++dia)
        soma_temp += temperatura_mes[dia];
    return soma_temp / (float)30;
}
// Peeenche as temperaturas m�dias di�rias do m�s
void preenche_temp_mes(int temperatura_mes[]) {

    for(int dia = 1; dia <= 30; ++dia)
        temperatura_mes[dia] = gera_temperaturas(TEMP_MENOR, TEMP_MAIOR);
    return;
}
// Gera um temperatura inteira dentro do intervalo especificado
int gera_temperaturas(int menor, int maior) {

    return rand() % (maior - menor + 1) + menor;
}
