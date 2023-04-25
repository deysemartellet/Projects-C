#include <stdio.h>
#include <conio.h>

float valor1, valor2, resultado;
char op;

main()
{
    printf("Informe o valor 1: \n");
    scanf("%f", &valor1);
    printf("Informe o valor 2: \n");
    scanf("%f", &valor2);
    printf("Informe a operacao: + | - | * | / \n");
    op = getche();
    resultado=0;

    if (op=='+')
        resultado=valor1+valor2;
    else
        if (op=='-')
        resultado=valor1-valor2;
        else
            if (op=='*')
            resultado=valor1*valor2;
            else
                if (op=='/')
                resultado=valor1/valor2;
                else
                    printf("Operacao invalida.");
    printf("\n\nResultado: %.2f", resultado);
}