#include <stdio.h>

int main(void){

    int type,code,pulso,pulsoR,pulsoC,cont,pulsoRM;
    float pulsoM;
    pulsoR=0;
    cont=0;
    pulsoC=0;

    printf("1:Residencial\n2:Comercial\n0:Fim\n\nQual tipo?");
    scanf("%d",&type);

    if (type==1){
        printf("Quantos pulsos?");
        scanf("%d",&pulso);
        printf("Qual seu codigo?");
        scanf("%d",&code);
        printf("\n");

        pulsoR+=pulso;

        pulsoRM=pulso;
    }
    else if(type==2){
        printf("Quantos pulsos?");
        scanf("%d",&pulso);
        printf("Qual seu codigo?");
        scanf("%d",&code);
        printf("\n");

        pulsoC+=pulso;
        cont++;
    }
    else {
        printf("invalido");
    }

    while(type!=0){
        printf("\n1:Residencial\n2:Comercial\n0:Fim\n\nQual tipo?");
        scanf("%d",&type);

        if (type==1){
            printf("Quantos pulsos?");
            scanf("%d",&pulso);
            printf("Qual seu codigo?");
            scanf("%d",&code);
            printf("\n");

            pulsoR+=pulso;

            pulsoRM=pulso;

            if (pulsoRM==pulso || pulso>pulsoRM){
                pulsoRM=pulso;
            }
        }
        else if(type==2){
            printf("Quantos pulsos?");
            scanf("%d",&pulso);
            printf("Qual seu codigo?");
            scanf("%d",&code);
            printf("\n");

            pulsoC+=pulso;
            cont++;
        }
        else {
            printf("invalido\n\n");
        }
    }

    if (cont>0){
        pulsoM=pulsoC/cont;
        printf("\n Quantidade total de pulsos residenciais consumidos:%d\nQuantidade total de pulsos comerciais consumidos:%d\nO código do assinante que consumiu o maior número de pulsos residenciais:%d\nA média de pulsos comerciais consumidos:%f",pulsoC,pulsoR,pulsoRM,pulsoM);
    }
    else{
        printf("nao deu certo");
    }



    return 0;

}
