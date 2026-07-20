#include <stdio.h>

int main(){

    float nota;
    float soma = 0;
    int validas = 0;

    while(validas < 2){
        scanf("%f", &nota);

        if(nota<0 || nota>10){
            printf("nota invalida\n");
        } else {
            validas += 1;
            soma += nota;
        }

    }

    printf("media = %.2f\n", soma/validas);

}