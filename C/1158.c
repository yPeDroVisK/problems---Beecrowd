#include <stdio.h>

int main(){

    int n, x , y;

    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&x, &y);

        int contador=0;
        int soma=0;
        while(contador < y){
            if(x%2 != 0){
                soma += x;
                contador++;
            }

            x++;

        }

        printf("%d\n", soma);

    }

}