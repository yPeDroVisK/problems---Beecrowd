#include <stdio.h>

int main(){

    int valor1 , valor2;

    while(1){
        scanf("%d %d", &valor1 , &valor2);

        if(valor1 == valor2){
            break;
        }

        if(valor1 > valor2){
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }

    }

}