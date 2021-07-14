#include <stdio.h>
#include <locale.h>

/*
Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 3.1
Questão 02

Descrição: O programa calculará a idade da pessoa e mostrará também a classificação da pessoa de acordo com uma tabela de faixas etárias.

 Algoritmo:
1) Pedir um número inteiro de 8 dígitos referente ao nascimento
2) Pedir um número inteiro de 8 dígitos referente a data atual
3) Separar os dígitos
4) Subtrair os valores dos dígitos da data de nasicmento e a atual
3) Mostrar a idade da pessoa
4) Se idade entre 0 e 1
    Mostrar "bebê"
senão, se idade entre 2 e 9
    Mostrar "criança"
senão, se idade entre 10 e 12
    Mostrar "pré-adolescente"
senão, se idade entre 13 e 17
    Mostrar "adolescente"
senão, se idade entre 18 e 59
    Mostrar "adulto"
senão, se idade maior que 59
    Mostrar "idoso"
*/


int main () {
    int dia, mes, ano, dia1, mes1, ano1, idade, diasn, diash, idade_em_dias, idade_em_anos, inteiro, inteiro1, data1, data;

    setlocale (LC_ALL,"");
    printf ("calcula a idade e classifica de acordo com uma tabela:\n\n");
    printf ("informe data de nascimento com 8 digitos: ");
scanf ("%d", &inteiro);
    printf ("informe data atual com 8 digitos: ");
scanf ("%d", &inteiro1);

data = inteiro;
ano = data % 10000;
mes = data / 10000 % 100;
dia = data / 1000000;

data1 = inteiro1;
ano1 = data1 % 10000;
mes1 = data1 / 10000 % 100;
dia1 = data1 / 1000000;

diasn = dia  + mes*30 + ano*365;

diash = dia1 + mes1*30 + ano1*365;

idade_em_dias = diash - diasn;
idade_em_anos = idade_em_dias / 365;

if (idade_em_anos >= 0 && idade_em_anos <= 1)
    printf ("bebê");
else if (idade_em_anos >= 2 && idade_em_anos <= 9)
    printf ("criança");
else if (idade_em_anos >= 10 && idade_em_anos <= 12)
    printf ("pré-adolescente");
else if (idade_em_anos >= 13 && idade_em_anos <= 17)
    printf ("adolescente");
else if (idade_em_anos >= 18 && idade_em_anos <= 59)
    printf ("adulto");
else if (idade_em_anos > 59)
    printf ("idoso");

return 0;
}
