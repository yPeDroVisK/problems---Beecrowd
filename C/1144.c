#include <stdio.h>

int main(){

int entrada;

scanf("%d", &entrada);

for(int i=1;i<=entrada;i++){

    int quadrado = i * i;
    int cubo = i * i * i;

    printf("%d %d %d\n",i,quadrado,cubo);
    printf("%d %d %d\n",i,quadrado+1,cubo+1);

}

}