#include <stdio.h>

int main (void){
    int c,va,v,vp,tv,tp,valor,qtd;
    vp=0;
    tp=vp;


    do{
        printf("Menu\n1. A vista\n2.A prazo\n0. Cancelar\n\n");
        scanf("%d",&c);

        if (c!=0 && c!=1 && c!=2){
                printf("\nerro\n\n");
        }
        else if (c==0){
            printf("\nend\n");
        }
        else{
            printf("\nqual valor?");
            scanf("%d",&v);
            printf("\n");

            switch (c){
                case 1: va+=v;
                        tv++;
                        break;
                default: vp+=v;
                        tp++;


            }
            }


    }while(c!=0);

    valor=va+vp;
    qtd=tp+tv;

    printf("Foram %d produtos a vista, %d a prazo e %d no total\nO valor das a vista foi %d e das a prazo %d, no total %d",tv,tp,qtd,va,vp,valor);

    return 0;
}
