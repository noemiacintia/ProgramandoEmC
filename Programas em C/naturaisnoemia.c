/* Algoritmo:
    - Zerar o total;
    - Gerar os n�meros naturais at� 20;
        - Para cada n�mero natural, acumular num total;
        total = total + natural;
        ou total += natural;
    - Mostrar o total
*/

#include <stdio.h>
#include <locale.h>

int main ()
{
    int natural, total = 0;

    setlocale(LC_ALL, "");
    printf("O programa soma os naturais de 1 at� 20:\n");
    for (natural=1; natural<=20; natural++)
    {
        total += natural;
    }
    printf("A soma �: %d", total);
    return 0;
}
