#include <stdio.h>

int main() {

    int teste;
    int x , y;
    float div;

    scanf("%d", &teste);

    for(int i=0;i<teste;i++){
        scanf("%d %d", &x , &y);

        if(y == 0){
            printf("divisao impossivel\n");
        } else {
            div = (float) x / y;
            printf("%.1f\n", div);
        }

    }

}