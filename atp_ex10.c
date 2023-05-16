#include <stdio.h>
#include <stdlib.h>


int main(){
    int x=0,i,fx,numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    if (numero>= 10 && numero <=100){
        for (i=1; i<=numero; i++){
        fx = x + (x+1);
        printf("%d\n",fx);
        x = fx;
        }
        }else{
            printf("Insira um numero que seja igual a 10 ou menor que 100");
            main();
        }
    return 0;
}
