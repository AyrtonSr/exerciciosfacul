#include <stdio.h>
#include<locale.h>

// a biblioteca "locale.h" serve para adicionar pontuação em português no codigo

int main (){

setlocale(LC_ALL, "PORTUGUESE"); // "Ativação" do locale.h

int senhaforte, senha_reescrita;

    printf ("Coloque uma senha forte númerica para seu login: \n");
    scanf ("%d", &senhaforte);
    printf ("Agora reescreva a senha: \n");
    scanf ("%d", &senha_reescrita);


    // O "if" fica responsavel por verificar se senha é igual a senha reescrita, se não for, ele informara que a senha esta foi preenchida incorretamente

        if (senhaforte==senhareescrita) {

            printf ("Sua senha foi cadastrada");

        } else {
            printf ("Sua senha está errada \n\n");
            main();
        }

return 0;
}
