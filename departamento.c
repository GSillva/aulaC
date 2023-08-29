#include <stdio.h>

int main(void){
    int modo,qtdp;
    float valor,parcela,valorFinal;


    printf("MENU\nÀ vista(1)\nParcelado(2)\n\nDigite o modo de compra: ");
    scanf("%d",&modo);

    if(modo==1){
        printf("\nqual valor da compra? ");
        scanf("%f",&valor);

        if (valor>0){
            printf("o valor da compra foi: %f",valor-(valor*0.05));
        }
        else{
            printf("valor invalido");
        }

    }
    else if(modo==2){
        printf("\nqual valor da compra? ");
        scanf("%f",&valor);

        if (valor>0){
            printf("quantas parcelas? ");
            scanf("%d",&qtdp);

            if (qtdp==3){
                printf("O valor foi %f e as parcelas foram %f",valor,valor/3);
            }
            else if (qtdp==5){
                printf("O valor foi %f e as parcelas foram %f",valor+(valor*0.02),valor+(valor*0.02)/5);
            }
            else if (qtdp==10){
                printf("O valor foi %f e as parcelas foram %f",valor+(valor*0.08),valor+(valor*0.08)/10);
            }
            else{
                printf("numero invalido de pacelas");
            }
        }
        else{
            printf("valor invalido");
        }

    }
    else{
        printf("opcao nao encontrada");
    }

    return 0;
}
