#include <stdio.h>

int main()
{

    int valor1 , valor2;
    int min, max;

    
    while(1){
    int soma = 0;
    scanf("%d %d", &valor1 , &valor2);
     
    if(valor1 <= 0 || valor2 <= 0){
        break;
    }

    if(valor1 > valor2){
        max = valor1;
        min = valor2;
    } else {
        min = valor1;
        max = valor2;
    }
    
    for(int i = min;i<=max;i++){
        printf("%d ", i);
        soma += i;
    }
        printf("Sum=%d\n", soma);
    }
    return 0;
}