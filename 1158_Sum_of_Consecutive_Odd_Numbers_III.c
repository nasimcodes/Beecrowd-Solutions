#include <stdio.h>
 
int main() {
 
    int N,X,Y;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&X,&Y);
        int sum=0;
        if(X%2==0){
            X++;
        }
        for(int j=0;j<Y;j++){
                sum+=X;
                X+=2;
        }
        printf("%d\n",sum);
    }
 
    return 0;
}