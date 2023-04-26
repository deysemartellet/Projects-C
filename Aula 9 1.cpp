// Escrever um programa que leia o nome, sexo e altura até que o usuário deseje sair. Após fazer o resumo com a quantidade de pessoas do sexo masculino e feminino, bem como as médias das alturas para cada sexo.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

char nome[50], sexo;
float altura, soma_alt_masc, soma_alt_fem;
int masc, fem;

main(){
    do{
        printf("\nGenero do usuario (F/M): ");
        scanf("%c", &sexo);
        printf("\nAltura do usuario: ");
        scanf("%f", &altura);
        printf("\nNome do usuario: ");
        fflush(stdin);
        gets(nome);
        sexo=toupper(sexo);

        if (sexo=='M') {
            masc++;
            soma_alt_masc+=altura;
        }

        if (sexo=='F') {
            fem++;
            soma_alt_fem+=altura;
        }
        printf("Deseja continuar? (S/N) ");
    } while(toupper(getche()) == 'S');    

     printf("\n%i sao do sexo masculino", masc);
     printf("\nA media das alturas eh de %.2f", soma_alt_masc/masc);
     printf("\n%i sao do sexo feminino", fem);
     printf("\nA media de altura feminino eh de %.2f", soma_alt_fem/fem);
}