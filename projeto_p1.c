#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int lucro;
    int despesa;
    int receita;
}EMP;

int main(){
setlocale(LC_ALL, "");

EMP emp1[4], emp2[4];
int i, j;

    for(i=0; i<2; i++){
        printf("Empresa %i\nDepartament %i", i+1, i+1);
        printf("Digite a despesa referente aos semestres de 2020:\n");
        for(j=0; j<4; j++){
            printf("Semestre %i", j+1);
            scanf("%i", &emp1[i].despesa[j]);
        }
    }
for(i=0;i<2;i++){
    for(j=0;j<4;j++)
        printf("%i ", emp1[i].despesa[j]);
}

return 0;}
