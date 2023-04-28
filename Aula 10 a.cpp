/* Escrever um programa que leia um vetor de 10 números quaisquer e após imprima todos os valores iguais ou maiores a 10 e suas respectivas posições no vetor (índice)*/

#include <stdio.h>
    int i;
    int nro[10];

main(){
    for (i=0; i<10; i++) {
        printf("Informe um nro: ");
        scanf("%i", &nro[i]);
    }

    printf("\n\nMostrando os nros digitados maiores que 10 e sua posicao (indice)\n\n");
    for (i=0; i<10; i++) 
        if (nro[i]>=10)
            printf("Indice %i = %i \n", i, nro[i]);

}