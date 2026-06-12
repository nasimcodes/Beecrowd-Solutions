#include <stdio.h>
 
int main() {
 
    double s=0,har=1;
    for(int i=1;i<=39;i+=2){
        s=s+i/har;
        har*=2;
    }
    printf("%.2f\n",s);
 
    return 0;
}