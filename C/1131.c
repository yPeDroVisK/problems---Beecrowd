#include <stdio.h>

int main(){

    int inter , gremio;
    int escolha;
    int vt_inter = 0, vt_gremio = 0;
    int partidas = 0;
    int empates = 0;

    while(1){

        scanf("%d %d", &inter, &gremio);
        partidas ++;
        
        if(inter>gremio){
            vt_inter ++;
        } else if(inter == gremio || gremio == inter) {
            empates ++;
        } else {
            vt_gremio ++;
        }

        while(1){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d\n", &escolha);

            if(escolha == 1 || escolha == 2){
                break;
            }
        }

        
        if(escolha == 2){
            printf("%d grenais\n", partidas);
            printf("Inter:%d\n", vt_inter);
            printf("Gremio:%d\n", vt_gremio);
            printf("Empates:%d\n", empates);
            if(vt_inter > vt_gremio){
                printf("Inter venceu mais\n");
            } else {
                printf("Gremio venceu mais\n");
            }

            break;
        }

        escolha = 0;


    }

}