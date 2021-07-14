/* Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 2.1
Questão 03

Descrição:  O programa calcula a energia cinética de uma partícula, a partir de
sua massa e sua velocidade.

Algoritmo:

a)declarar todas as variáveis utilizadas como variáveis reais (tipo float), pois pode
ter medidas fracionárias;
b) solicitar ao usuário a massa da partícula;
c) solicitar ao usuário a velocidade da partícula;
d) usar os valores armazenados nas variáveis (massa e velocidade) na fórmula que calcula a
energia cinética, armazenando o resultado (energia cinética) numa nova variável;
e) mostrar na tela o valor calculado da energia cinética dessa partícula.
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
