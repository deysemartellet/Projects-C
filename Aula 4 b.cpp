#include <stdio.h>

int uno, raz, last;
float plus;

main(){
    printf("Digite o primeiro termo da progressao: ");
    scanf("%i", &uno);
    printf("Digite a razao da progressao: ");
    scanf("%i", &raz);
    last=uno+(5-1)*raz;
    plus=(uno+last)*5/2;
    printf("A soma dos CINCO primeiros termos eh de %f", plus);
}