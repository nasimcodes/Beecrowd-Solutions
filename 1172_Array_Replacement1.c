#include <stdio.h>
 
int main() {
 
    int X,i=0;
    while(i<10){
        scanf("%d",&X);
        printf("X[%d] = %d\n",i,X<=0?1:X);
        i++;
    }
    
    return 0;
}