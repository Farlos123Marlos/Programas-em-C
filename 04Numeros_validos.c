/**********************************************************
*  Descrição: Números válidos com gotoxy                  *
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

// Função desenha moldura de tela
// Função tela
void tela(char titulo[])
{
	// Desenhar linhas horizontais
	for(int coluna=1;coluna<=120;coluna++)
	{
		// Desenha linha1
	 	gotoxy(coluna,1); printf("=");
	 	// Desenha linha5
	 	gotoxy(coluna,5); printf("=");
		// Desenha linha24
	 	gotoxy(coluna,29); printf("=");
	}
	// Desenhar linhas verticais
	for(int linha=1;linha<=29;linha++)
	{
		// Desenha coluna1
	 	gotoxy(1,linha); printf("|");
	 	// Desenha linha80
	 	gotoxy(120,linha); printf("|");
	}
	// Título do programa cenrealizado
	int tamanho;
	tamanho = strlen(titulo); // Tamanho do título
	gotoxy(60-tamanho/2,3);
	printf("%s",titulo);
	// Rodapé
	gotoxy(37,30);
	printf("Desenvolvido por: José Marcelo Traina Chacon");
}
// Função principal do programa
main ()
{
     //Declaração de variável
     int nota;
     setlocale(LC_ALL, "portuguese");
     tela("Programa leitura de valores válidos"); // chama a função tela
     // Entrada
     do
     {
          gotoxy(20,10);
          printf("Digite a nota [0..100]:                   ");
          gotoxy(44,10);
          scanf("%i",&nota);
     } while(nota<0 || nota>100);
     // Saída
     gotoxy(20,18);
     printf("A nota digitada foi %i",nota);
     getch();
}


