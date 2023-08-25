#include <stdio.h>

int main (void){
    int i,j;
    float s;
    j=11;
    s=0;

    for (i=1;i<11;i++){
            j--;
            s+=(pow(2,i))/j;

    }

    printf("%f",s);

    return 0;
}
