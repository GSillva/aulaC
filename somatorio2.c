#include <stdio.h>

int main(void){
    int i,s;

    for (i=0;i<30;i++){
        if ((i+10)%2==0){
            s+=(480-(i*5))/(i+10);
            printf(" + %d/%d",480-(i*5),i+10);
        }
        else{
            s-=(480-(i*5))/(i+10);
            printf(" - (%d/%d)",480-(i*5),i+10);
        }

    }
    printf("\n\n%d",s);
    return 0;
}
