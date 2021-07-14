/* Nome: No�mia C�ntia Sales Santos da Silva
Matr�cula: 119210674

Lista: 2.1
Quest�o 01

Descri��o:  O programa calcula a �rea de um tri�ngulo
Algoritmo:
a) declarar todas as vari�veis utilizadas como vari�veis reais (tipo float), pois pode
ter medidas fracion�rias;
b) solicitar ao usu�rio o valor da base do tri�ngulo;
c) solicitar ao usu�rio o valor da altura do tri�ngulo;
d) usar os valores armazenados nas vari�veis (base e altura) na f�rmula que calcula a
�rea do tri�ngulo, armazenando o resultado (�rea do tri�ngulo) numa nova vari�vel;
e) mostrar na tela o valor calculado da �rea do tri�ngulo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float base, altura, area_do_triangulo;
    setlocale(LC_ALL, "portuguese");
    printf("Programa que calcula a area de um tri�ngulo:\n\n");
    printf("Informe o valor da base e altura de um tri�ngulo, em cent�metros, separados por um espa�o:\n");
    scanf("%f %f", &base, &altura);
    area_do_triangulo = (base * altura)/2;
    printf("\nA area do tri�ngulo � %.2f cm�.\n",  area_do_triangulo);
    return 0;
}
