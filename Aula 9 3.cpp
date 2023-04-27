/* Escrever um programa que leia o salário inicial e faça aumentos sucessivos de 10% até que o valor do salário atualizado seja maior que o dobro do salário inicial. */

#include <stdio.h>

float sal_inicial, sal_aumento;
int i;

main(){
        printf("Digite o salario inicial: ");
        scanf("%f", &sal_inicial);
        sal_aumento=sal_inicial;
        do {
            i++;
            sal_aumento*=1.1;
            printf("\n Atualizando 10%% %ix = %.2f ", i, sal_aumento); /* coloca %% pro programa saber que não é uma string e sim 10% mesmo*/
        } while (sal_aumento<=sal_inicial*2);

    printf("O salario final ficou em %.2f", sal_aumento);
}