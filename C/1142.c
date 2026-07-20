#include <stdio.h>

int main() {

    int entrada;
    int valor1=1, valor2=2, valor3=3;

    scanf("%d", &entrada);

    for(int i=0;i<entrada;i++){

        printf("%d %d %d PUM\n", valor1,valor2,valor3);
        valor1+=4;
        valor2+=4;
        valor3+=4;

    }

}