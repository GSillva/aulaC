#include <stdio.h>

int fibo( int *n, int *n1){
    *n1=(*n1)+(*n);
    *n=(*n1)-(*n);
    return *n1;

}

int main(void){

    int a,b,c;
    b=0;
    c=1;


    printf("quer quantas operacoes?");
    scanf("%d",&a);

    printf("1 \n");

    for (int i=1;i<a;i++){
        printf("%d \n",fibo(&b,&c));

    }
    
    return 0;
}