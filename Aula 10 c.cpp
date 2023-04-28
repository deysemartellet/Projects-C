/* Escrever um programa que leia um vetor de números inteiros positivos e após imprima o maior valor positivo dentro do vetor e sua posição.*/

#include <stdio.h>

int i, maior, indice_maior;
int nro[10];

main(){
    for(i=0; i<10; i++) {
        printf("Digite nros inteiros positivos: ");
        scanf("%i", &nro[i]);
    }
    maior=0;
    printf("------------------------");

    for(i=0; i<10; i++) {
        if(nro[i]>maior){
            maior=nro[i];
            indice_maior=i;
        }
    }

    printf("\n\nMostrando o maior numero entre todos do vetor\n\n");
    printf("\nO nro foi \t%i e seu indice foi \t%i", maior, indice_maior);
}