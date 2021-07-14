// Uso do comando de repetição do-while
// Mostra os inteiros de 1 a 10

#include <stdio.h>
#include <locale.h>

int main()
{
    int contador=1;

    setlocale (LC_ALL, "");
    printf ("do while: \n");
    do
    {
        printf("%d ", contador);
    }
    while (++contador <= 10);
    printf ("\n\nfor: \n");
    for (contador = 1; contador <= 10; ++contador)
    {
        printf ("%d ", contador);
    }
    printf ("\n\nwhile: \n");
    contador =1;
    while (contador <=10)
    {
        printf ("%d ", contador);
        ++contador;
    }
    printf ("\n");
    return 0;
}
