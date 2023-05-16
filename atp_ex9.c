#include <stdio.h>
#include <stdlib.h>


int main(){
int I,i,c , segundoN, terceiroN ;
  for (I=1 ; I<=5; I++){
  printf("%d-", I);
  segundoN = I*10;
  printf("%d", segundoN);
      for (i=1; i<=3; i++){
          terceiroN = segundoN + 10;
          printf("-%d", terceiroN);
          segundoN = terceiroN;
      }
printf("\n");
}
return 0;
}
