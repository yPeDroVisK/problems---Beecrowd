#include <stdio.h>

int main(){

    float d=3, n=2;
    float s = 1;

    for(d;d<39;d+=2){
        s += (d/n);
        n*=2;

    }

    printf("%.2f\n", s);
}