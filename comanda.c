#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, opcao2, opcao3, opcao4, opcao5, opcao6, quant;
    float valor, total = 0, gorjeta, pagamento, descont, cancelado;
    char sair;
    while (1) {
        printf("Cadastrar Comanda = 1\n"); // icluir valor monetario de um produto
        printf("Fechar comanda    = 2\n"); // exibir o subtotal
        printf("Realizar desconto = 3\n"); // Aqui sera sera informado o valor do desconto
        printf("Fazer o pagamento = 4\n");
        printf("Cancelar comanda  = 5\n"); // Aqui o subtotal e o total serao zerados
        printf("Cancelar item     = 6\n"); // Aqui sera realizado uma subtração do pruduto que o cliente desistiu
        printf("Sair = 0\n");
        scanf("%i", &opcao);

        switch (opcao){
        case 1:
            system("cls");
            printf("Informe o valor do produto: \n");
            scanf("%f", &valor);
            printf("Informe a quantidade: \n");
            scanf("%i",&quant);
            total= total+(valor*quant);
            scanf("%c",&sair);
            system("cls");
            break;
        case 2:
            system("cls");
            printf("O valor total deu: R$%.2f\n\n", total);
            scanf("%c",&sair);

            break;
        case 3:
            system("cls");
            printf("Qual o valor do desconto? \n");
            scanf("%f", &descont);
            total= total-descont;
            scanf("%c",&sair);

            break;
        case 4:
            system("cls");
            printf("Informe o valor do pagamento\n");
            scanf("%f", &pagamento);

            if (pagamento==total){
                total= pagamento - total;
                system("cls");
                printf("Obrigado pela sua preferencia \n");
                scanf("%c",&sair);


            }else{
                if (pagamento>total){
                    total= pagamento - total;
                    system("cls");
                    printf("O troco deu: R$ %.2f\n", total);


                }else{
                    total= pagamento - total;
                    system("cls");
                    printf("Faltam R$ %.2f\n", total);
                    (sair);

                }
            }
            break;
        case 5:
            system("cls");
            total= 0;
            printf("Comanda cancelada\n");
            scanf("%c",&sair);

            break;
        case 6:
            system("cls");
            printf("Informe o valor do produto que sera cancelado: \n");
            scanf("%f", &cancelado);
            total = total - cancelado;
            scanf("%c",&sair);

            break;
        case 0:
            return 0;
            break;
        }
        }
    }

