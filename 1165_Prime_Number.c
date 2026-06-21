#include <stdio.h>
 
int main() {
 
    int N,X;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&X);
        int sum=0,i=2,is_prime=1;
        while(i<=X/2){
            if(X%i==0){
                is_prime=0;
                break;
            }
            i++;
        }
        printf("%d %s\n",X,is_prime==1?"eh primo":"nao eh primo");
    }
    
    return 0;
}