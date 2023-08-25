#include <stdio.h>

int main (void){
    float hex,hf,h;

    printf("quantas horas extras o funcionario fez? ");
    scanf("%f",&hex);
    printf("quantas horas o funcionario faltou? ");
    scanf("%f",&hf);
    h = hex – ((float)2/3*hf);
    h=h*60

    if (hex<0 || hf<0){
        printf ("erro");
    }
    else {


        if (h>=2400){
            printf("A gratificao será de 500 reais");
        }
        else if (1800<=h<2400){
            printf("A gratificao será de 400 reais");
        }
        else if (1200<=h<1800){
            printf("A gratificao será de 300 reais");
        }
        else if (600<=h<1200){
            printf("A gratificao será de 200 reais");
        }
        else{
            printf("A gratificao será de 100 reais");
        }
    }

    return 0;

}
