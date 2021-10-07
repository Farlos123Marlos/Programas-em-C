#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

typedef struct {
    int V0;
    int a;
    int t;
    int Vf;
}AMOSTRA;

int main(){
setlocale(LC_ALL,"");
AMOSTRA amostra[5];
int i, Mv=0, Ma=0, Mt=0, Mvf=0;
int Mev=100000, Mea=100000, Met=100000, Mevf=100000;

    printf("Programa MRUV\n\n");
    for(i=0; i<5;i++){
        printf("Amostra %i\n", i+1);
        printf("Digite a velocidade inicial (V0): "); scanf("%i", &amostra[i].V0);
        printf("Digite a aceleração (a): "); scanf("%i", &amostra[i].a);
        printf("Digite o tempo decorrido (t): "); scanf("%i", &amostra[i].t);
        amostra[i].Vf = amostra[i].V0+(amostra[i].a*amostra[i].t);
        printf("Velocidade final = %i\n\n", amostra[i].Vf);
    }
    for(i=0;i<5;i++){
        if(amostra[i].V0 > Mv)
            Mv = amostra[i].V0;

        if(amostra[i].a > Ma)
            Ma = amostra[i].a;

        if(amostra[i].t > Mt)
            Mt = amostra[i].t;

        if(amostra[i].Vf > Mvf)
            Mvf = amostra[i].Vf;
    }
    for(i=0;i<5;i++){
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
    for(i=0;i<5;i++)
        printf("%i        %i    %i   %i   %i\n", i+1, amostra[i].V0, amostra[i].a, amostra[i].t, amostra[i].Vf);
    printf("\nMENOR   %i   %i   %i   %i", Mev, Mea, Met, Mevf);
    printf("\nMAIOR   %i   %i   %i   %i", Mv, Ma, Mt, Mvf);

return 0;}
