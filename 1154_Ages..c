#include <stdio.h>
 
int main() {
 
    int age,sum=0;
    float average,count=0;
    while(1){
        scanf("%d",&age);
        if(age<0){
            break;
        }
        sum+=age;
        count++;
    }
    if(count>0){
    average=sum/count;
    printf("%.2f\n",average);
    }
 
    return 0;
}