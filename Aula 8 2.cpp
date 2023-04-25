#include <stdio.h> //printar os n primeiros números ímpares em ordem oposta

int n, i;

int main(void){
    printf("Digite o nro de numeros impares que quer ver? \n");
    scanf("%i", &n);

    for (i=n; i>0; i--)
        printf("O %d numero é: %d\n", i, 2*i-1);
}

