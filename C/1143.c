#include <stdio.h>

int main() {

    int entrada;

    scanf("%d", &entrada);

    for(int i=1;i<=entrada;i++){

        printf("%d %d %d\n",i,i*i,i*i*i);

    }

}