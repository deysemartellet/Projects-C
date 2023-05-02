/* Escrever um programa que leia uma matriz 30x2. As linhas representam os dias e as colunas as entradas (receitas) e despesas (saídas) e calcule o saldo atual (entradas - saídas).*/

#include <stdio.h>

float fluxo[30][2];
float saldo;
int i, j;

main(){
    for(i=0; i<30; i++){
        printf("Digite o valor de entrada e saída para o dia %i: ", i+1);
        scanf("%f %f", &fluxo[i][0], &fluxo[i][1]);
        printf(" ==> %.2f\n", fluxo[i][0]-fluxo[i][1]);
        saldo+=(fluxo[i][0]-fluxo[i][1]);
    }

    printf("\n\nO saldo do mes foi %.2f", saldo);
}