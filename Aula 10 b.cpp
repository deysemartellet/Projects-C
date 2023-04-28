/* Escrever um programa que leia um vetor de números inteiros positivos e negativos e após imprima quantos números negativos e positivos existem dentro do vetor.*/

#include <stdio.h>

int i, cont_neg, cont_pos;
int nro[10];

main(){
    for (i=0; i<10; i++) {    
    printf("Digite um numero: ");
    scanf("%i", &nro[i]);
    }

    printf("\n\nMostrando a quantidade de nros positivos e negativos\n\n");

    for (i=0; i<10; i++) {
        if(nro[i]>0)
            cont_pos++;
        if(nro[i]<0)
            cont_neg++;
    }

    printf("\n\nMostrando os nros digitados positivos e negativos\n\n");
    printf("\nTotal de nros positivos \t%i", cont_pos);
    printf("\nTotal de nros negativo \t%i", cont_neg);


}