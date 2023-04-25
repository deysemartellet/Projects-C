#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int contador, conta_aprov, conta_rec, conta_invalidos;
float nota1, nota2, media, media_geral, soma;
float menor, maior;

main() {
    conta_aprov = conta_rec = soma = conta_invalidos = 0;
    maior=0; menor=10;

    for(contador = 1; contador <= 10; contador++) {
        printf("Digite a nota 1: \n");
        scanf("%f", &nota1);
        printf("Digite a nota 2: \n");
        scanf("%f", &nota2);
        if (nota1 == 0 || nota2 == 0 || nota1 > 10 || nota2 > 10 || nota1 < 0 || nota2 < 0) {
            conta_invalidos++;
            continue;
        }

        media = (float) (nota1+nota2*2)/3;
        printf("Media: %.2f\n", media);
        soma+=media;
        (media>6.0) ? conta_aprov++ : conta_rec++;

        if (media<menor)
            menor=media;
        
        if (media>maior)
            maior=media;
    }

    media_geral = soma/(contador - conta_invalidos);
    printf("Nro de alunos aprovados: %d\n", conta_aprov);
    printf("Nro de alunos reprovados: %d\n", conta_rec);
    printf("Media geral da turma: %.2f\n", media_geral);
    printf("Menor media da turma: %.2f\n", menor);
    printf("Maior media da turma: %.2f\n", maior);

}