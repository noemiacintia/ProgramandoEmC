#include <stdio.h>
#include <locale.h>

/*
Nome: No�mia C�ntia Sales Santos da Silva
Matr�cula: 119210674

Lista: 3.1
Quest�o 02

Descri��o: O programa calcular� a idade da pessoa e mostrar� tamb�m a classifica��o da pessoa de acordo com uma tabela de faixas et�rias.

 Algoritmo:
1) Pedir um n�mero inteiro de 8 d�gitos referente ao nascimento
2) Pedir um n�mero inteiro de 8 d�gitos referente a data atual
3) Separar os d�gitos
4) Subtrair os valores dos d�gitos da data de nasicmento e a atual
3) Mostrar a idade da pessoa
4) Se idade entre 0 e 1
    Mostrar "beb�"
sen�o, se idade entre 2 e 9
    Mostrar "crian�a"
sen�o, se idade entre 10 e 12
    Mostrar "pr�-adolescente"
sen�o, se idade entre 13 e 17
    Mostrar "adolescente"
sen�o, se idade entre 18 e 59
    Mostrar "adulto"
sen�o, se idade maior que 59
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
    printf ("beb�");
else if (idade_em_anos >= 2 && idade_em_anos <= 9)
    printf ("crian�a");
else if (idade_em_anos >= 10 && idade_em_anos <= 12)
    printf ("pr�-adolescente");
else if (idade_em_anos >= 13 && idade_em_anos <= 17)
    printf ("adolescente");
else if (idade_em_anos >= 18 && idade_em_anos <= 59)
    printf ("adulto");
else if (idade_em_anos > 59)
    printf ("idoso");

return 0;
}
