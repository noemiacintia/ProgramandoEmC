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
  printf("\n\tUsu�rio: %s", nome);
  getch(); // serve para o windows n�o abrir uma janela cmd.exe qnd executar oq o usu�rio digitar
  return 0;
}
