#include <stdio.h>
#include <locale.h>

/*
Nome: No�mia C�ntia Sales Santos da Silva
Matr�cula: 119210674

Lista: 3.1
Quest�o 01

Descri��o: Recebe um inteiro positivo entre 1 e 99 e mostra seu ordinal equivalente.

 Algoritmo:
1) Pedir um n�mero inteiro positivo entre 1 e 99
2) Obter a dezena do digito
3) Obter a unidade do digito
4) Se dezena igual a 1
    Mostrar "d�cimo"
sen�o, se dezena igual a 2
    Mostrar "vig�simo"
sen�o, se dezena igual a 3
    Mostrar "trig�simo"
sen�o, se dezena igual a 4
    Mostrar "quadrag�simo"
sen�o, se dezena igual a 5
    Mostrar "quinquag�simo"
sen�o, se dezena igual a 6
    Mostrar "sexag�simo"
sen�o, se dezena igual a 7
    Mostrar "septuag�simo"
sen�o, se dezena igual a 8
    Mostrar "octog�simo"
sen�o, se dezena igual a 9
    Mostrar "nonag�simo"

5) Se dezena e unidade diferentes de zero
    Mostrar espa�o em branco

6) Se unidade igual a 1
    Mostrar "primeiro"
sen�o, se unidade igual a 2
    Mostrar "segundo"
sen�o, se unidade igual a 3
    Mostrar "terceiro"
sen�o, se unidade igual a 4
    Mostrar "quarto"
sen�o, se unidade igual a 5
    Mostrar "quinto"
sen�o, se unidade igual a 6
    Mostrar "sexto"
sen�o, se unidade igual a 7
    Mostrar "s�timo"
sen�o, se unidade igual a 8
    Mostrar "oitavo"
sen�o, se unidade igual a 9
    Mostrar "nono" */


int main () {
    int digito, dezena, unidade;

    setlocale (LC_ALL,"");
    printf ("converte inteiros entre 1 e 99 em numeral ordinal:\n\n");
    printf ("informe um inteiro entre 1 e 99: ");
    scanf ("%d", &digito);

    dezena = digito / 10;
    unidade = digito % 10;

if (dezena == 1)
    printf ("d�cimo");
else if (dezena == 2)
    printf ("vig�simo");
else if (dezena == 3)
    printf ("trig�simo");
else if (dezena == 4)
    printf ("quadrag�simo");
else if (dezena == 5)
    printf ("quinquag�simo");
else if (dezena == 6)
    printf ("sexag�simo");
else if (dezena == 7)
    printf ("septuag�simo");
else if (dezena == 8)
    printf ("octog�simo");
else if (dezena == 9)
    printf ("nonag�simo");

if (dezena != 0 && unidade != 0)
    printf (" ");

if (unidade == 1)
 printf ("primeiro");
else if (unidade == 2)
    printf ("segundo");
else if (unidade == 3)
    printf ("terceiro");
else if (unidade == 4)
    printf ("quarto");
else if (unidade == 5)
    printf ("quinto");
else if (unidade == 6)
    printf ("sexto");
else if (unidade == 7)
    printf ("s�timo");
else if (unidade == 8)
    printf ("oitavo");
else if (unidade == 9)
    printf ("nono");

return 0;
}
