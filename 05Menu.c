/**********************************************************
*  Descrição: Exemplo de função tela melhorada           *
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
// Função tela
void tela (char titulo[])
{
	for (int col=1; col<=120; col++)
	{
		// Desenha a linha 1
		gotoxy(col,1); printf("=");
		// Desenha a linha 5
		gotoxy(col,5); printf("=");
		// Desenha a linha 24
		gotoxy(col,29); printf("=");
	}
	for (int lin=1;lin<=29;lin++)
	{
		// Desenha a coluna 1
		gotoxy(1,lin); printf("|");
		// Desenha a coluna 80
		gotoxy(120,lin); printf("|");
	}
	// Escreve o título da tela centralizado na linha 3
	int tamanho = strlen(titulo);
	gotoxy(60-tamanho/2,3); printf("%s",titulo);
	// Escreve o rodapé da tela
	gotoxy(40,30); printf("Desenvolvido por: José Marcelo Traina Chacon");
}



// Função Tela A
void telaA()
{
	system("cls");
	tela("Tela A"); // chama a função tela
	gotoxy(45,15); printf("Tecle algo para continuar");
	getch(); // parada
}
// Função Tela B
void telaB()
{
	system("cls");
	tela("Tela B"); // chama a função tela
	gotoxy(45,15); printf("Tecle algo para continuar");
	getch(); // parada
}
// Função Tela C
void telaC()
{
	system("cls");
	tela("Tela C"); // chama a função tela
	gotoxy(45,15); printf("Tecle algo para continuar");
	getch(); // parada
}
// Função Tela D
void telaD()
{
	system("cls");
	tela("Tela D"); // chama a função tela
	gotoxy(45,15); printf("Tecle algo para continuar");
	getch(); // parada
}
// Função principal
main()
{
	setlocale(LC_ALL, "portuguese");
	// Declaração de variável
	char opc;
	do // faça
	{
		system("cls"); // limpa a tela
		tela("Programa Telas"); // chama a função tela
		// Monta menu
		gotoxy(53,7); printf("MENU PRINCIPAL");
		gotoxy(55,10); printf("1. TELA A");
		gotoxy(55,12); printf("2. TELA B");
		gotoxy(55,14); printf("3. TELA C");
		gotoxy(55,16); printf("4. TELA D");
		gotoxy(55,18); printf("5. SAIR");
		gotoxy(45,21); printf("Digite sua opção [1,2,3,4,5]: ");
		// lê a opção do usuário
		opc = getche(); // ler opção
		switch (opc)
		{
			case '1': telaA(); break;
			case '2': telaB(); break;
			case '3': telaC(); break;
			case '4': telaD(); break;
			case '5': break;
			default : gotoxy(52,12);printf("******************");
					  gotoxy(52,13);printf("* OPÇÃO INVÁLIDA *");
					  gotoxy(52,14);printf("******************"); getch();
		}
	}while(opc!='5'); // opção para sair do programa - enquanto opc diferente de '5'
}
