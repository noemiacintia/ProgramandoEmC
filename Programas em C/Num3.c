/* Nome: No�mia C�ntia Sales Santos da Silva
Matr�cula: 119210674

Lista: 2.1
Quest�o 03

Descri��o:  O programa calcula a energia cin�tica de uma part�cula, a partir de
sua massa e sua velocidade.

Algoritmo:

a)declarar todas as vari�veis utilizadas como vari�veis reais (tipo float), pois pode
ter medidas fracion�rias;
b) solicitar ao usu�rio a massa da part�cula;
c) solicitar ao usu�rio a velocidade da part�cula;
d) usar os valores armazenados nas vari�veis (massa e velocidade) na f�rmula que calcula a
energia cin�tica, armazenando o resultado (energia cin�tica) numa nova vari�vel;
e) mostrar na tela o valor calculado da energia cin�tica dessa part�cula.
*/

#include <stdio.h>

int main()
{
    float massa, velocidade, energia_cinetica;
    printf("Programa que calcula a energia cinetica de uma particula, a partir de sua massa e sua velocidade:\n\n");
    printf("Informe a massa da particula em kg:\n");
    scanf("%f", &massa);
    printf("\nInforme a velocidade da particula em m/s:\n");
    scanf("%f", &velocidade);
    energia_cinetica = (massa * (velocidade*velocidade))/2;
    printf("\nA energia cinetica da particula eh %.1f J\n",  energia_cinetica);
    return 0;
}
