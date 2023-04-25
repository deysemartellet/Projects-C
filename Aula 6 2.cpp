#include <stdio.h>

int atual, nasc, idade;

main()
{
    printf("Digite o ano atual: ");
    scanf("%i", &atual);
    printf("Digite seu ano de nascimento: ");
    scanf("%i", &nasc);
    idade=atual-nasc;

    if (idade>=16)
        printf("Apto a votar.");
    
    if (idade>=18)
            printf("\nApto a dirigir.");   
}