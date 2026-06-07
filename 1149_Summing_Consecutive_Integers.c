#include <stdio.h>
 
int main() {
 
    int a,N,sum=0;
    scanf("%d",&a);
    while(scanf("%d",&N) && N<=0);
    
    for(int i=0;i<N;i++){
        sum+=(a+i);
    }
    printf("%d\n",sum);
 
    return 0;
}