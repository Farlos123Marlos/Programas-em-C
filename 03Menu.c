/**********************************************************
*  Descri��o: Cria um menu de op��es                      *
**********************************************************/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

// Fun��o posicionamento de cursor gotoxy(col, lin);
void gotoxy(int x, int y)
{
     COORD c;
     c.X = x - 1;
     c.Y = y - 1;
     SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Fun��o desenha moldura de tela
void tela()
{
     // Limpa a tela
     system("cls");
     // Desenha as linhas horizontais
     for(int c=1; c<=120; c++)
     {
          gotoxy(c,1); printf("=");
          gotoxy(c,5); printf("=");
          gotoxy(c,30); printf("=");
     }
     // Desenha as linhas verticais
     for(int l=1;l<=30;l++)
     {
          gotoxy(1,l); printf("|");
          gotoxy(120,l); printf("|");
     }
}
// Fun��o menu
void menu()
{
     tela(); // chama a fun��o tela
     gotoxy(48,3); printf("Programa Menu de Algor�tmos");
     // Montar menu
     gotoxy(55,9);  printf("1. Tela A");
     gotoxy(55,11); printf("2. Tela B");
     gotoxy(55,13); printf("3. Tela C");
     gotoxy(55,15); printf("4. Sair");
     gotoxy(45,18); printf("Digite a sua op��o[1,2,3,4]: ");
}
// Fun��o Tela A
void telaA()
{
     tela();
     gotoxy(53,3); printf("Programa Tela A");
}
// Fun��o Tela B
void telaB()
{
     tela();
     gotoxy(53,3); printf("Programa Tela B");
}
// Fun��o Tela C
void telaC()
{
     tela();
     gotoxy(53,3); printf("Programa Tela C");
}
// Fun��o principal do programa
main ()
{
     setlocale(LC_ALL, "portuguese");
     // Declara��o de vari�vel
     char resp;
     do
     {
          menu();
          resp = getche();
          // Verificar op��o escolhida
          switch (resp)
          {
                 case '1': telaA();
                           getch();
                           break;
                 case '2': telaB();
                           getch();
                           break;
                 case '3': telaC();
                           getch();
                           break;
                 case '4': break;
                 default : gotoxy (45,21);
                           printf("Op��o inv�lida, digite novamente");
                           getch();
          }
     } while (resp!='4');
}














