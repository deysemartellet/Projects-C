#include <stdio.h>

float HT, VH, SB, TD, SL, PD;

main(){
    printf("Digite as horas trabalhadas no mes (1.00 para hora): ");
    scanf("%f", &HT);
    printf("Digite o valor da hora trabalhada: (1.00 para valor): ");
    scanf("%f", &VH);
    printf("Digite o valor do desconto (1.00 para valor): ");
    scanf("%f", &PD);
    SB = HT*VH;
    TD = (PD/100)*SB;
    SL = SB-TD;
    printf("\n O valor bruto é de %f", SB);
    printf("\n O valor com desconto é de %f", TD);
    printf("\n O salario liquido eh de %f", SL);
}