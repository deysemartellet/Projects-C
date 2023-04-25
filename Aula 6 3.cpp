#include <stdio.h>
#include <ctype.h>
#include <conio.h>

char carac;

main() //esse é com if, se quiser getche, tira as barras da função getche e coloca no scanf
{
    printf("Digite uma letra: ");
    scanf("%c", carac);
    //carac=getche();
    
    carac = toupper(carac);

    if (carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U')
        printf("\nVogal!");
    else
        printf("\nNao eh vogal!");
    
}
