/* Escrever um programa que leia uma matriz 3x2 de números inteiros e calcule a soma de todos os elementos (valores) da matriz. */

#include <stdio.h>

int i, j, soma;
int nro[3][2];

int main(){
    for(i=0; i<3; i++)
        for (j=0; j<2; j++) {
            printf("Digite o elemento (%i, %i) da matriz: ", i, j);
            scanf("%i", &nro[i][j]);
            soma+=nro[i][j];
        }
    printf("A soma de todos os elementos da matriz eh de %i", soma);
        

}
