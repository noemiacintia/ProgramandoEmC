/* Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 2.1
Questão 04

Descrição:  O programa calcula a distancia entre dois pontos.
Algoritmo:

a)declarar todas as variáveis utilizadas como variáveis reais (tipo float), pois pode
ter medidas fracionárias;;
b) solicitar ao usuário a distancia x1 do primeiro ponto;
c) solicitar ao usuário a distancia y1 do segundo ponto;
d) solicitar ao usuário a distancia x2 do primeiro ponto;
e) solicitar ao usuário a distancia y2 do segundo ponto;
d) usar os valores armazenados nas variáveis (x1, y1, x2 e y2) na fórmula que calcula a
distancia entre os pontos, armazenando o resultado (distancia) numa nova variável;
e) mostrar na tela o valor calculado da distancia entre os pontos.
*/

#include <stdio.h>

int main()
{
    float x1, x2, y1, y2, distancia;
    printf("Programa que calcula distancia entre dois pontos:\n\n");
    printf("Informe a distancia x1 do primeiro ponto:\n");
    scanf("%f", &x1);
    printf("\nInforme a distancia y1 do primeiro ponto:\n");
    scanf("%f", &y1);
    printf("Informe a distancia x2 do segundo ponto:\n");
    scanf("%f", &x2);
    printf("\nInforme a distancia y2 do segundo ponto:\n");
    scanf("%f", &y2);
    distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("\nA distancia entre os pontos eh %.2f\n",  distancia);
    return 0;
}
