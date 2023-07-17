#include <stdio.h>

main(){

    int a, b, soma, sub, multi, div;
    
    printf("Taca um numero ai:");
    scanf("%i", &a);
    printf("Taca outro numero ai:");
    scanf("%i", &b);

    soma = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;

    printf("/nA soma dos dois numeros eh: %i", soma);
    printf("/nA subtracao dos dois numeros eh: %i", sub);
    printf("/nA multiplicacao dos dois numeros eh: %i", multi);
    printf("/nA divisao entre os dois numeros eh: %i", div);
}