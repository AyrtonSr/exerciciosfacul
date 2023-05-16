#include <stdio.h>


int main()
{

    char produto[25], ctipoProduto[25];
    float quantidade;
    float preco_unit;
    float total;
    float peso;

        printf(" Digite o nome do produto: ");
        scanf("%s", produto); /* Le string produto*/
        printf("\n Digite o tipo de produto (unit ou peso)?: ");
        scanf("%s", ctipoProduto); /* Lê string ctipoProduto*/



        if (strcmp(ctipoProduto,"unit") != 0 && strcmp(ctipoProduto,"peso") != 0){  // Esse "if" serve para verificar se o usuario informou um tipo de produto inexistente


            printf ("\n Voce informou um tipo inexistente de produto: ");


        }else {


            printf("\n\n As strings lidas sao:\n %s \n %s", produto, ctipoProduto); /* Imprime as strings*/

                if (strcmp(ctipoProduto,"unit")==0){ // o "A função strcmp é responsavel pela comparação da strings ctipoProduto

                    printf("\n\n Tipo Unitario: %s ",ctipoProduto ); /* Imprime as strings se for do tipo peso unitário*/
                    printf("\n Informe o valor do produto: ");
                    scanf ("\n %f", &preco_unit);
                    printf("\n Informe a quantidade que sera comprada do produto: ");
                    scanf ("\n %f", &quantidade);

                    total = preco_unit*quantidade;

                    printf("\n O valor a ser pago e: %.2f", total);

                }else {


                    printf("\n\n Tipo peso variavel: %s ",ctipoProduto ); /* Imprime as strings se for do tipo peso variável*/
                    printf("\n Informe quanto custa o peso (em Kg) do produto: ");
                    scanf ("\n %f", &peso);
                    printf("\n Informe o peso (em Kg) que sera comprado: ");
                    scanf ("\n %f", &quantidade);

                    total = peso*quantidade;

                    printf("\n O valor a ser pago e: %.2f", total);

                }

            }

 return 0;
}
