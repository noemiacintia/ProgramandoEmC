#include <stdio.h>
#include <locale.h>

/*
Nome: Noêmia Cíntia Sales Santos da Silva
Matrícula: 119210674

Lista: 3.1
Questão 01

Descrição: Recebe um inteiro positivo entre 1 e 99 e mostra seu ordinal equivalente.

 Algoritmo:
1) Pedir um número inteiro positivo entre 1 e 99
2) Obter a dezena do digito
3) Obter a unidade do digito
4) Se dezena igual a 1
    Mostrar "décimo"
senão, se dezena igual a 2
    Mostrar "vigésimo"
senão, se dezena igual a 3
    Mostrar "trigésimo"
senão, se dezena igual a 4
    Mostrar "quadragésimo"
senão, se dezena igual a 5
    Mostrar "quinquagésimo"
senão, se dezena igual a 6
    Mostrar "sexagésimo"
senão, se dezena igual a 7
    Mostrar "septuagésimo"
senão, se dezena igual a 8
    Mostrar "octogésimo"
senão, se dezena igual a 9
    Mostrar "nonagésimo"

5) Se dezena e unidade diferentes de zero
    Mostrar espaço em branco

6) Se unidade igual a 1
    Mostrar "primeiro"
senão, se unidade igual a 2
    Mostrar "segundo"
senão, se unidade igual a 3
    Mostrar "terceiro"
senão, se unidade igual a 4
    Mostrar "quarto"
senão, se unidade igual a 5
    Mostrar "quinto"
senão, se unidade igual a 6
    Mostrar "sexto"
senão, se unidade igual a 7
    Mostrar "sétimo"
senão, se unidade igual a 8
    Mostrar "oitavo"
senão, se unidade igual a 9
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
    printf ("décimo");
else if (dezena == 2)
    printf ("vigésimo");
else if (dezena == 3)
    printf ("trigésimo");
else if (dezena == 4)
    printf ("quadragésimo");
else if (dezena == 5)
    printf ("quinquagésimo");
else if (dezena == 6)
    printf ("sexagésimo");
else if (dezena == 7)
    printf ("septuagésimo");
else if (dezena == 8)
    printf ("octogésimo");
else if (dezena == 9)
    printf ("nonagésimo");

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
    printf ("sétimo");
else if (unidade == 8)
    printf ("oitavo");
else if (unidade == 9)
    printf ("nono");

return 0;
}
