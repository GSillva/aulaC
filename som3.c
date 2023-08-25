#include <stdio.h>

int main(void){
    int i,n;
    float s;

    printf("quer quantas operacoes?");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        if ((i+10)%2==0){
            s+=(480-(i*5))/(i+10);
            printf(" + %d/%d",480-(i*5),i+10);
        }
        else{
            s-=(480-(i*5))/(i+10);
            printf(" - (%d/%d)",480-(i*5),i+10);
        }

    }
    printf("\n\n%.2f",s);
    return 0;
}
