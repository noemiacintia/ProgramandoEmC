/* Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 2.1
Questão 01

Descrição:  O programa calcula a área de um triângulo
Algoritmo:
a) declarar todas as variáveis utilizadas como variáveis reais (tipo float), pois pode
ter medidas fracionárias;
b) solicitar ao usuário o valor da base do triângulo;
c) solicitar ao usuário o valor da altura do triângulo;
d) usar os valores armazenados nas variáveis (base e altura) na fórmula que calcula a
área do triângulo, armazenando o resultado (área do triângulo) numa nova variável;
e) mostrar na tela o valor calculado da área do triângulo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float base, altura, area_do_triangulo;
    setlocale(LC_ALL, "portuguese");
    printf("Programa que calcula a area de um triângulo:\n\n");
    printf("Informe o valor da base e altura de um triângulo, em centímetros, separados por um espaço:\n");
    scanf("%f %f", &base, &altura);
    area_do_triangulo = (base * altura)/2;
    printf("\nA area do triângulo é %.2f cm².\n",  area_do_triangulo);
    return 0;
}
