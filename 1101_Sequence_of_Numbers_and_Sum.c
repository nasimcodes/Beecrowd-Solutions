#include <stdio.h>
 
int main() {
 
    int M,N;
    int start,end,sum;
    while(1){
        scanf("%d %d",&M,&N);
    if(M<=0 || N<=0){
        break;
    }
    else{
        if(M<N){
            start=M;
            end=N;
        }
        else{
            start=N;
            end=M;
        }
        sum=0;
        for(int i=start;i<=end;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        
    }
    }
    return 0;
}