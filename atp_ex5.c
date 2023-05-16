#include <stdio.h>
#include <stdlib.h>


int main (){

int repeticao, i;


printf ("Insira quantos numeros '1' voce gostaria de ver na tela, sendo o numero maximo de '1' eh 100 \n");
scanf ("%i", &repeticao);

if (repeticao < 0 || repeticao > 100){

} else {
for (i = 1; i<= repeticao - 1 ; i++){

     printf("1");

     if (i%10 != 0){

        printf("-");
     }

     if (i%10 == 0){
        printf("\n");
     }
     if (i % (repeticao -1) == 0){

        printf("1");

     }

}

}


return 0;
}
