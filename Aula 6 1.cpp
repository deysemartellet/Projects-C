#include <stdio.h>

float n1, n2, ma;

main(){
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    ma=(n1+n2)/2;
    printf("Media = %.2f\n", ma);

    if (ma>=7.0)
        printf("Aluno aprovado!");
    else
        if (ma<3.0)
            printf("Aluno reprovado!");  //me atrapalhei nas chaves socorro       
        else
            printf("Aluno em exame!");
    
}