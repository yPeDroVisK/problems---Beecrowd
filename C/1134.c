#include <stdio.h>

int main() {

    int escolha;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while(escolha != 4){

        scanf("%d", &escolha);

        switch (escolha){
        case 1:
            alcool ++;
            break;
        case 2:
            gasolina ++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            break;;
        }

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

}