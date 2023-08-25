#include <stdio.h>

int main(void){
    int i,s,t;
    s=0;



    for(i=0;i<30;i++){

        t=i+10;
        if (t%2==0){
            s+=(480-i*10)/(i+10);
            printf("+(%d/%d)",480-i*10,t);
        }
        else{
            s-=(480-i*5)/(i+10);
            printf("-(%d/%d)",480-i*5,t);
        }
    }

    printf("\n\n%d",s);
    return 0;
}
