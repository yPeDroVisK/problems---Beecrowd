#include <stdio.h>

int main(void) {
    float nota;
    float soma = 0;
    int validas = 0;
    int escolha;

    while (1) {
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("nota invalida\n");
            continue;
        }

        validas++;
        soma += nota;

        if (validas == 2) {
            printf("media = %.2f\n", soma / validas);

            while (1) {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &escolha);

                if (escolha == 1 || escolha == 2) {
                    break;
                }
            }

            if (escolha == 2) {
                break;
            }

            soma = 0;
            validas = 0;
        }
    }

    return 0;
}