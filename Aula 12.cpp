/* O sistema deve apresentar ao usuário um menu com as seguintes opções:
1- Incluir; 2- Alterar; 3- Excluir e 4-Imprimir na tela, o cadastro de N produtos de um determinado departamento de uma loja. Para o cadastro deve ser utilizado uma estrutura de dados tipo registro com as seguintes informações: Código do Produto, Nome do Produto, Valor de Custo, Valor de Venda, Quantidade em Estoque.*/

#include <stdio.h> //funções de printf e scanf
#include <conio.h> //função getche()
#include <ctype.h> //função toupper()
#include <string.h> //função strcpy()
#include <locale.h> //função setLocale()
#include <stdlib.h> //função system()

struct
    RegProduto {
        int idProduto;
        char nomeProduto[20];
        float custoProduto;
        float vendaProduto;
        int qtdProduto;
    };

    RegProduto prod[100];

    int op, cod, flag;
    int i, cont;
    float vlrEstoque;
    char resp;

main(){
    setlocale(LC_ALL, "PORTUGUESE");
    i=0;

    do{
        system("cls"); //limpa a tela toda iteração
        printf("\n---------------MENU--------------\n");
        printf("1 - Para Incluir Produto\n");
        printf("2 - Para Alterar Produto\n");
        printf("3 - Para Excluir Produto\n");
        printf("4 - Para Mostrar na Tela os Produtos\n");
        printf("5 - Para Exibir Relatório do Custo do Estoque\n");
        printf("6 - Sair\n\n");
        
        scanf("%d", &op);

        switch (op) {
            case 1:
                if (i>99){
                    printf("Nro de proodutos esgotado, cadastrados no máximo 100 produtos.");
                    break;
                }
            
                do {
                    printf("\nDigite o ID do produto: ");
                    scanf("%d", &prod[i].idProduto);
                    fflush(stdin);
                    printf("Digite o nome do produto: ");
                    gets(prod[i].nomeProduto);
                    printf("Digite o custo do produto: ");
                    scanf("%f", &prod[i].custoProduto);
                    printf("Digite a quantidade de estoque do produto: ");
                    scanf("%d", &prod[i].qtdProduto);
                    printf("\nDeseja continuar incluindo? [S/N]");
                    i++;
                } while (toupper(getche())=='S');
                break;

            case 2:
                printf("\nInforme o ID do produto para alteração: ");
                scanf("%i", &cod);
                flag=0;
                for(cont=0; cont<=i; cont++){
                    if(cod==prod[cont].idProduto){
                        flag=1;
                        fflush(stdin);
                        printf("\n\nDigite o nome do produto: ");
                        gets(prod[cont].nomeProduto);
                        printf("Digite o custo do produto: ");
                        scanf("%f", &prod[i].custoProduto);
                        printf("Digite a quantidade de estoque do produto: ");
                        scanf("%d", &prod[i].qtdProduto);
                    }
                }
                if(flag==0) //caso não encontre o produto
                    printf("Código do produto não encontrado. Tente novamente.\n\n");
                system("pause"); //mensagem pra pressionar qualquer tecla. Se não tiver, a mensagem acima só vai piscar pro cliente, não irá ficar pra ele poder ler.
                break;

            case 3:
                printf("\nInforme o ID do produto para exclusão: ");
                scanf("%i", &cod);
                flag=0;
                for(cont=0; cont<=i; cont++){
                    if(cod==prod[cont].idProduto){
                        flag=1;
                        printf("\n\nNome do Produto: %s", prod[cont].nomeProduto);
                        printf("\nCusto do Produto: %.2f", prod[cont].custoProduto);
                        printf("\nValor de Venda do Produto: %.2f", prod[cont].vendaProduto);
                        printf("\nQuantidade de Estoque do Produto: %i", prod[cont].qtdProduto);
                        printf("\n\nConfirma a exclusão do Produto? [S/N]");
                        fflush(stdin);
                        scanf("%c", &resp);
                        if(toupper(resp)=='S'){
                            prod[cont].idProduto=0;
                            strcpy(prod[cont].nomeProduto, "Excluído"); //atribui a string Excluído ao produto
                            prod[cont].custoProduto=0;
                            prod[cont].vendaProduto=0;
                            prod[cont].qtdProduto=0;
                        }

                    }
                }
                if(flag==0)
                    printf("Código do produto não encontrado. Tente novamente.\n\n");
                system("pause");
                break;
            
            case 4:
                printf("Lista de Produtos Cadastrados ........");
                printf("--------------------------------------");
                printf("\nID    Nome        Custo   Venda   Quantidade");
                printf("\n------------------------------------");
                for(cont=0; cont<100; cont++){
                    if (prod[cont].idProduto !=0) {
                        printf("\n%-4i", prod[cont].idProduto); // nro inteiro com 4 digitos
                        printf("%-20s", prod[cont].nomeProduto); // nome com apenas 20 caracteres
                        printf("%8.2f", prod[cont].custoProduto); // nro com 8 digitos inteiros e 2 float
                        printf("\t%8.2f", prod[cont].vendaProduto);
                        printf("\t%3i", prod[cont].qtdProduto);
                    }
                }

                printf("-----------------------------------------------------");
                system("pause");
                break;

            case 5:
                printf("*********RELATÓRIO**********\n\n");
                vlrEstoque=0;
                for(cont=0; cont<100; cont++)
                    if(prod[cont].idProduto!=0)
                        vlrEstoque+=prod[cont].custoProduto*prod[cont].qtdProduto;
                printf("\n=========================================================================");
                printf("\nO valor total do estoque de todos os produtos da empresa é R$", vlrEstoque);
                printf("\n=========================================================================");
                system("pause");
                break;

            case 6:
                break;
            
            default:
                printf("Erro: Escolha uma opção entre 1 a 6.\n");
                system("pause");
                break;
        }
    } while (op!=6);
}
