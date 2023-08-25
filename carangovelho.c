#include <stdio.h>

int main (void){
    int car;
    float desc, price;
    do{
        printf("Menu\n1.alcool\n2.gasolina\n3.diesel\n\n");

        printf("Digite o preco do carro: ");
        scanf("%f",&price);

        if (price>0){
            printf("Digite o tipo de combustivel: ");
            scanf("%d",&car);

            switch (car){
                case 1: desc=price*0.25;
                    break;
                case 2: desc=price*0.21;
                    break;
                case 3: desc=price*0.14;
                    break;
                default: printf("invalido\n\n");
            }

            printf("O carro custa %.2f reais.\n\n",price-desc);
        }
        else {
            printf("erro");
        }

        }while ((car==1 || car==2 || car ==3) && price>0);
        printf("ok");

}
