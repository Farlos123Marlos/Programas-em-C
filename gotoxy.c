#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
typedef struct {
    int V0;
    int a;
    int t;
    int Vf;
}AMOSTRA;

void gotoxy(int x, int y){
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);}

void moldura(){
    for(int c=1; c<=120; c++){
        gotoxy(c,1); printf("=");
        gotoxy(c,5); printf("=");
        gotoxy(c,29); printf("=");}

    for(int l=1;l<=29;l++){
        gotoxy(1,l); printf("|");
        gotoxy(120,l); printf("|");}

    gotoxy(52,3); printf("Programa de MRUV");
    gotoxy(20,30); printf("Desenvolvido por Guilherme Monferdini, reaproveitando códigos de José Marcelo Traina Chacon");}


int main (){
setlocale(LC_ALL, "");
moldura();
AMOSTRA amostra[4];

int i, Mv=0, Ma=0, Mt=0, Mvf=0;
int Mev=100000, Mea=100000, Met=100000, Mevf=100000;

    for(i=0; i<4;i++){
        if(i=0||i=1){
        gotoxy(20,6+(i*5));
        printf("Amostra %i\n", i+1);
        gotoxy(10,7+(i*5));
        printf("Digite a velocidade inicial (V0): "); scanf("%i", &amostra[i].V0);
        gotoxy(10,8+(i*5));
        printf("Digite a aceleração (a): "); scanf("%i", &amostra[i].a);
        gotoxy(10,9+(i*5));
        printf("Digite o tempo decorrido (t): "); scanf("%i", &amostra[i].t);
        amostra[i].Vf = amostra[i].V0+(amostra[i].a*amostra[i].t);
        gotoxy(10,10+(i*5));
        printf("Velocidade final = %i\n\n", amostra[i].Vf);}
        else{
        gotoxy(90,6+((i-2)*5));
        printf("Amostra %i\n", i+1);
        gotoxy(75,7+((i-2)*5));
        printf("Digite a velocidade inicial (V0): "); scanf("%i", &amostra[i].V0);
        gotoxy(75,8+((i-2)*5));
        printf("Digite a aceleração (a): "); scanf("%i", &amostra[i].a);
        gotoxy(75,9+((i-2)*5));
        printf("Digite o tempo decorrido (t): "); scanf("%i", &amostra[i].t);
        amostra[i].Vf = amostra[i].V0+(amostra[i].a*amostra[i].t);
        gotoxy(75,10+((i-2)*5));
        printf("Velocidade final = %i\n\n", amostra[i].Vf);}
        }

    for(i=0;i<4;i++){
        if(amostra[i].V0 > Mv)
            Mv = amostra[i].V0;

        if(amostra[i].a > Ma)
            Ma = amostra[i].a;

        if(amostra[i].t > Mt)
            Mt = amostra[i].t;

        if(amostra[i].Vf > Mvf)
            Mvf = amostra[i].Vf;
    }
    for(i=0;i<4;i++){
        if(amostra[i].V0 < Mev)
            Mev = amostra[i].V0;

        if(amostra[i].a < Mea)
            Mea = amostra[i].a;

        if(amostra[i].t < Met)
            Met = amostra[i].t;

        if(amostra[i].Vf < Mevf)
            Mevf = amostra[i].Vf;
    }


    printf("Amostra  V0   a   t   Vf\n");
    for(i=0;i<4;i++)
        printf("%i        %i    %i   %i   %i\n", i+1, amostra[i].V0, amostra[i].a, amostra[i].t, amostra[i].Vf);
    printf("\nMENOR   %i   %i   %i   %i", Mev, Mea, Met, Mevf);
    printf("\nMAIOR   %i   %i   %i   %i", Mv, Ma, Mt, Mvf);



getch();
}
