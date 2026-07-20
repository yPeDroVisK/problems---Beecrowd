#include <stdio.h>

int main(){

    int x , y;
    int auxiliar;

    scanf("%d %d", &x , &y);

    if(x>y){
        auxiliar = x; 
        x = y;         
        y = auxiliar;
    }

    for(int i=x;i<y;i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }

}