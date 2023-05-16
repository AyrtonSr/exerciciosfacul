#include <stdio.h>
#include <stdlib.h>


int main (){
int I , i;
for (I = 1; I<=5; I++){
    for (i=1; i<=5; i++){
        if (i==I){
        printf("1");
        } else {
        printf("0");
        }
    }
printf("\n");
}
}
return 0;
}
