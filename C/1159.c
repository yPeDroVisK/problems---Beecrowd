#include <stdio.h>

int main(){

    int x;
    
    while (scanf("%d", &x) == 1 && x != 0){
        

        int contador = 0;
        int soma = 0;

        while (contador < 5){
            
            if(x%2 == 0){
                soma += x;
                contador++;
            }
            x++;
        }
        
        printf("%d\n", soma);
    }
    

}