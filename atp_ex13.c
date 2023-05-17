#include<stdio.h>
#include<stdlib.h>

int main (){


int numero,i, j=0;

printf("Insira um numero positivo diferente de 0 para identificarmos se eh ou nao um numero primo: \n");
scanf("%i", &numero);

if (numero<0 || numero == 0){

    printf("Esse numero nao atende aos requisitos previos");

} else {
    for (i=2; i<=numero-1; i++){


            if (numero%i==0){

                j= 1;
                i= numero -1;
            }
    }

}
if (j==0){

    printf("Esse numero eh primo");

}else {

    printf("Esse numero noa eh primo");
}


return 0;
}
