#include <stdio.h>


int main () {


    float n1 , n2, r; //n=número , r=resultado
    char simbolo ;

    printf ("coloque numeros para somar ou subtrair: \n");
    scanf ("%f", &n1);
    printf ("Coloque o sinal de soma ou de subtracao: \n");
    scanf ("%s", &simbolo);
    printf ("coloque o ultimo numeros : \n");
    scanf ("%f", &n2);

        if (simbolo == '+' ){

            r = n1 + n2;
            printf ("A soma deu: %.2f\n", r); //O ".2" que foi colocadp é para definir quantas casas decimais ele imprimira após a virgula

        } else {

            r = n1-n2;
            printf ("A subtracao deu: %.2f\n", r); //O ".2" que foi colocadp é para definir quantas casas decimais ele imprimira após a virgula
        };



return 0;
}
