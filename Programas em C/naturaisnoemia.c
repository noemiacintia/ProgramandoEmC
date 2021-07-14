/* Algoritmo:
    - Zerar o total;
    - Gerar os números naturais até 20;
        - Para cada número natural, acumular num total;
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
    printf("O programa soma os naturais de 1 até 20:\n");
    for (natural=1; natural<=20; natural++)
    {
        total += natural;
    }
    printf("A soma é: %d", total);
    return 0;
}
