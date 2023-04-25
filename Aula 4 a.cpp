#include <stdio.h>

int nro, last;

main(){
    printf("Escreva o nro: ");
    scanf("%i", &nro);
    last = nro%10;
    printf("O ultimo digito do nro %i eh %i", nro, last);
}
