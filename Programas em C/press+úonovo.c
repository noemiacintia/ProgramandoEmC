#include <stdio.h>
#include <locale.h>

int main (){
    int sistolica, diastolica;

    setlocale(LC_ALL, "");
    printf("\no programa  informa se a pressão é ou não ideal, por meio do comando ternário,\n"
            "para um experimento:\n");
    printf("\ninforme a pressão arterial sistólica:\n");
    scanf("%d", &sistolica);
    printf("\ninforme a pressão arterial diastólica:\n");
    scanf("%d", &diastolica);
    printf("%s\n", sistolica <= 120 && diastolica <= 80 ? "\neste paciente é um bom candidato ao experimento" :
           "\neste paciente não é um bom candidato ao experimento");
    return 0;
}
