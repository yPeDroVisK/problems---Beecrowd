#include <stdio.h>

int main() {

    int senha = 2002;
    int teste;

    while(1){
        scanf("%d", &teste);

        if(teste == senha){
            printf("Acesso Permitido\n");
            break;
        }

        if(teste != senha){
            printf("Senha Invalida\n");
        }

    }

}