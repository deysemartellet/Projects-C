// Escrever um programa que leia um número inteiro até que a soma de todos os números digitados for maior que 500.

#include <stdio.h>

int nro, soma;

main(){
    do {
        printf("Digite um numero inteiro, positivo ou negativo: ");
        scanf("%i", &nro);
        soma+=nro;
    } while (soma<=500);

    printf("A soma chegou em %i", soma);
}

