#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int  contador, lin;

    printf("problema na impress�o do tri�ngulo: \n\n\n");

for (lin=1; lin<=10; lin++)
    {
        for (contador = 10; contador>=lin; contador--)
        {
            printf ("*");
        }

        printf("\n");
    }

return 0;
}
