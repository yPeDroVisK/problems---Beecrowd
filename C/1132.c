#include <stdio.h>

int main() {

    int x , y;
    int max , min;
    int soma = 0;
    int i;

    scanf("%d %d", &x , &y);

    if(x>y){
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }

    for(i=min;i<=max;i++){
        if(i % 13 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);


}