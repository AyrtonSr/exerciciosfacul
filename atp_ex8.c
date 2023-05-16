#include <stdio.h>
#include <stdlib.h>


int main(){

int valorN, valorN2, i; // valorN = valor numerico

    printf("Insira um valor numerico, para que seja feita um drecrecimento ate 0: \n");
    scanf("%d", &valorN);

    valorN2=valorN;

        for (i = valorN ; i>0; i--){


            valorN2 = valorN2 - 1;
            printf("%d \n", valorN2);

        }



return 0;
}
