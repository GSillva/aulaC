#include <stdio.h>

int main (void){
    int i,n,p;
    p=0;

    printf("Qual numero? ");
    scanf("%d",&n);

    if (n>0){
        for (i=1;i<n;i++){
            if (n%i==0){
                p+=i;
            }
        }
        if (p==n){
            printf("eh perfeito");
        }
        else{
            printf("nao eh perfeito");
        }
    }
    else{
            printf("erro");
    }
    return 0;
}
