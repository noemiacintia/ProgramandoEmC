/* Nome: No�mia C�ntia Sales Santos da Silva
Matr�cula: 119210674

Lista: 2.1
Quest�o 02

Descri��o:  O programa calcula a m�dia aritm�tica de um aluno
Algoritmo:

a)declarar todas as vari�veis utilizadas como vari�veis reais (tipo float), pois pode
ter medidas fracion�rias;
b) solicitar ao usu�rio a primeira nota do aluno;
c) solicitar ao usu�rio a segunda nota do aluno;
d) solicitar ao usu�rio a terceira nota do aluno
e) usar os valores armazenados nas vari�veis (nota1, nota2 e nota3) na f�rmula que calcula a
media aritmetica, armazenando o resultado (media aritmetica) numa nova vari�vel;
f) mostrar na tela o valor calculado da media aritmetica desse aluno.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media_aritmetica;
    printf("Programa que calcula a media aritmetica de um aluno:\n\n");
    printf("Informe o valor da primeira nota do aluno:\n");
    scanf("%f", &nota1);
    printf("\nInforme o valor da segunda nota do aluno:\n");
    scanf("%f", &nota2);
    printf("Informe o valor da terceira nota do aluno:\n");
    scanf("%f", &nota3);
    media_aritmetica = (nota1 +  nota2 + nota3)/3;
    printf("\nA media aritmetica do aluno eh %.1f\n",  media_aritmetica);
    return 0;
}
