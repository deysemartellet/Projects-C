/* Escrever um programa que leia uma matriz 4x4 e calcule a soma de todos os elementos, a soma dos elementos da diagonal principal. */

#include <stdio.h>

int mat[4][4], soma, soma_diag, i, j;

main(){
    for(i=0; i<4; i++)
        for (j=0; j<4; j++){
            printf("Digite o elemento (%i, %i) da matriz: ", i, j);
            scanf("%i", &mat[i][j]);
            soma+=mat[i][j];
            if (i==j)
                soma_diag+=mat[i][j];
        }

        printf("\n\nA soma dos nros da matriz 4x4 foi %i", soma);
        printf("\nA soma ds nros da Diagonal Principal foi %i", soma_diag);
}