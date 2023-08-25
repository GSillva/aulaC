#include <stdio.h>

int main (void){

    int sexo,i,homem,mulher;
    float mediaMulheres,maior,menor,altura;

    mulher=0;
    homem=0;

    for (i=0;i<3;i++){
        printf("Qual sua altura e sexo(m.1/h.2)?");
        scanf("%f %d",&altura,&sexo);

        if (i==0){
            menor=altura;
            maior=altura;
        }

        if(sexo==2){
            homem++;
            if(altura<menor || altura==menor){
                menor=altura;
            }
            else if(altura>maior){
                maior=altura;
            }
        }
        else if(sexo==1){
            mediaMulheres+=altura;
            mulher++;
            if(altura<menor){
                menor=altura;
            }
            else if(altura>maior || altura==maior){
                maior=altura;
            }
        }
        else{
            printf("valor invalido\n");
        }


    }

    printf("homens:%d\nmedia:%f\nMaior altura:%f\nMenor altura:%f",homem,mediaMulheres/mulher,maior,menor);
    return 0;
}
