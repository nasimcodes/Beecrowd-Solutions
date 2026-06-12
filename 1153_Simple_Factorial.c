#include <stdio.h>
 
int main() {
 
    int N,fact=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);
 
    return 0;
}