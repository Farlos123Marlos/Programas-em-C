/**********************************************************
*  Descrição: Exemplo de posicionamento de cursor na tela *
**********************************************************/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

// Função posicionamento de cursor gotoxy(col, lin);
void gotoxy(int x, int y)
{
     COORD c;
     c.X = x - 1;
     c.Y = y - 1;
     SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Função principal do programa
int main ()
{
     setlocale(LC_ALL, "portuguese");
     // Posiciona o cursor na coluna 57 linha 15
     gotoxy(57,15); printf("CENTRO");
     gotoxy(1,1); printf("SUPERIOR, ESQUERDO");
     gotoxy(1,30); printf("INFERIOR, ESQUERDO");
     gotoxy(103,1); printf("SUPERIOR, DIREITO");
     gotoxy(103,30); printf("INFERIOR, DIREITO");
     getch();
     return 0;
}
