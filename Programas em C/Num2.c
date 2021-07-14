/* Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 2.1
Questão 02

Descrição:  O programa calcula a média aritmética de um aluno
Algoritmo:

a)declarar todas as variáveis utilizadas como variáveis reais (tipo float), pois pode
ter medidas fracionárias;
b) solicitar ao usuário a primeira nota do aluno;
c) solicitar ao usuário a segunda nota do aluno;
d) solicitar ao usuário a terceira nota do aluno
e) usar os valores armazenados nas variáveis (nota1, nota2 e nota3) na fórmula que calcula a
media aritmetica, armazenando o resultado (media aritmetica) numa nova variável;
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
