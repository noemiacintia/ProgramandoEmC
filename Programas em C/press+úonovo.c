#include <stdio.h>
#include <locale.h>

int main (){
    int sistolica, diastolica;

    setlocale(LC_ALL, "");
    printf("\no programa  informa se a press�o � ou n�o ideal, por meio do comando tern�rio,\n"
            "para um experimento:\n");
    printf("\ninforme a press�o arterial sist�lica:\n");
    scanf("%d", &sistolica);
    printf("\ninforme a press�o arterial diast�lica:\n");
    scanf("%d", &diastolica);
    printf("%s\n", sistolica <= 120 && diastolica <= 80 ? "\neste paciente � um bom candidato ao experimento" :
           "\neste paciente n�o � um bom candidato ao experimento");
    return 0;
}
