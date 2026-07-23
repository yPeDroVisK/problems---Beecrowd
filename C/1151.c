#include <stdio.h>

int main(){

    int entrada;
    int x = 0, y = 1 , proximo;

    scanf("%d", &entrada);

    for(int i=0;i<entrada;i++){

        if(i == entrada - 1){

            printf("%d\n", x);

        } else {

            printf("%d ", x);

        }

        proximo = x + y;
        x = y;
        y = proximo;

    }

}