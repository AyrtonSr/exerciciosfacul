#include<stdio.h>
#include <stdlib.h>


int main (){

float salario, emprestimo, valorP, Psalario; // ValorP = valor por parcela . Psalario = Porcentagem do Salario
int parcela;


printf("Qual o seu salario?\n");
scanf("%f", &salario);
printf("Quanto de emprestimo vc quer?\n");
scanf ("%f", &emprestimo);
printf("Em quantas parcelas voce gostaria de fazer seu emprestimo?\n");
scanf ("%i", &parcela);

    valorP = emprestimo/parcela;
    Psalario = salario * 30/100;

    if ( Psalario >=valorP ){

        printf("O valor das parcelas ficou em %.2f", valorP);

    }else{

        printf ("Nao foi permitido esse numero de parcelas, o valor das parcelas e superior ao seu salario");



    }







return 0;
}
