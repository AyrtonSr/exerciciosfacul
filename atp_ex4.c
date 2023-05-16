#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
float taboada, m ; // m = multiplicação
char tipo;

printf("Qual o tipo de taboada voce quer? +, -, *, / \n");
scanf ("%s", &tipo);

if (tipo == '+'){

    printf("Qual taboada de soma voce quer que seja gerada? \n");
    scanf ("%f", &taboada);

    for (i = 1; i <=10; i++){

            m = taboada + i;

        printf("%2.f + %i = %2.f \n", taboada , i , m);
    }

    } else {

        if ( tipo == '-'){

        printf("Qual taboada de subtracao voce quer que seja gerada? \n");
        scanf ("%f", &taboada);

        for (i = 1; i <=10; i++){

                m = taboada - i;

            printf("%2.f - %i = %2.f \n", taboada , i , m);

        }



        } else {

            if ( tipo == '*'){

            printf("Qual taboada de multiplicacao voce quer que seja gerada? \n");
            scanf ("%f", &taboada);

            for (i = 1; i <=10; i++){

                    m = taboada * i;

                printf("%2.f x %i = %2.f \n", taboada , i , m);

            }

            } else {

                printf("Qual taboada de divisao voce quer que seja gerada? \n");
                scanf ("%f", &taboada);

                for (i = 1; i <=10; i++){


                        m = taboada / i;

                    printf("%2.f / %i = %2.2f \n", taboada , i , m);
                }


                }





return 0;
        }
}
}
