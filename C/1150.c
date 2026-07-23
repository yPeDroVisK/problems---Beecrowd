#include <stdio.h>

int main(){

    int x , z;
    int vezes = 1;
    int soma;

    scanf("%d %d", &x , &z);

    while(z<=x){

        scanf("%d", &z);

    }

    soma = x;

    while(soma<=z){

        x++;
        soma += x;
        vezes++;

    }

    printf("%d\n", vezes);

}