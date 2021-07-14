#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x == 5)
            continue; // Ignora os comandos restantes,
// se x igual a 5
        printf("%d ", x);
    }
    printf("\ncontinue foi usado para saltar a"
           "impressão do 5\n");
    return 0;
}
