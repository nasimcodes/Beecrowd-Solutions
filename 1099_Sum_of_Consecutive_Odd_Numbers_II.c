#include <stdio.h>
 
int main() {
 
    int N,X,Y;
    int start,end,sum;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d %d",&X,&Y);
        if(X<Y){
            start=X;
            end=Y;
        }
        else{
            start=Y;
            end=X;
        }
        sum=0;
        for(int j=start+1;j<end;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
 
    return 0;
}