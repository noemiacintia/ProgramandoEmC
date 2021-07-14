#include <stdio.h>
#include <conio.h>
#include <locale.h>

// teste para exibir string
int main()
{
  char nome[100];

  setlocale(LC_ALL, "");
  printf("\tNome: ");
  gets(nome);
  system("cls");
  printf("\n\tUsuário: %s", nome);
  getch(); // serve para o windows não abrir uma janela cmd.exe qnd executar oq o usuário digitar
  return 0;
}
