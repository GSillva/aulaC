#include <stdio.h>

fibo(int pos){
        int a,b,c,p,termo;
        a=0;
        b=1;

        
        if (pos==1){
                printf("0");
        }else if (pos==2){
                printf("0\n1");
        }else{
                printf("\n0");
                for (int i=0; i<pos; i++){
                        termo=a+b;
                        
                        printf("\n%d",termo);
                        a=b;
                        b=termo;
                        
                }
        }

    
}

int main (void){
    int p;
    printf("Qual posição? ");
    scanf("%d",&p);

    fibo(p);
}

