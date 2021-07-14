#include <stdio.h>
#include <locale.h>

int main()
{

    int num, invertido = 0;

    setlocale(LC_ALL, "");
    printf("Programa que calcule e exiba todos os palíndromos entre 10 e 999.");
    for (num = 10; num <=999; num++){
        while (num > 0)
    {
        invertido = invertido * 10 + num % 10;
        num = num / 10;
    }
        if(invertido==num)
                printf("\n%d", num);
    }
    return 0;
}
