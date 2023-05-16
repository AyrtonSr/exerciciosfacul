#include<stdio.h>
#include<stdlib.h>


int main(){

    int n1, n2, n3,mn;

    printf("Insira 3 numeros impares:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if (n1%2 == 0 || n2%2==0 || n3%2==0){
       printf("Voce nao colocou todos os numeros impares");


    } else {


       mn = n1;

        if (mn<n2){
            mn = n2;

            if (mn<n3){
                mn = n3;
                printf("%d", mn);
            }else{
            printf("%d", mn);

            }

        }else {

            if ( mn< n3){
                mn = n3;
                printf("%d", mn);

            }else{

            printf("%d", mn);
            }
        }



    }

return 0;
}
