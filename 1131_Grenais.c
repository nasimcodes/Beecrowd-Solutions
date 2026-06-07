#include <stdio.h>
 
int main() {
 
    int inter,gremio,count=0;
    int novo,sum_of_inter=0,sum_of_gremio=0,sum_of_draw=0;
    
    do{
       
        scanf("%d %d",&inter,&gremio);
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&novo);
    if(inter>gremio){
        sum_of_inter++;
    }
    else if(inter<gremio){
        sum_of_gremio++;
    }
    else if(inter==gremio){
        sum_of_draw++;
    }
    
    count++;
    }while(novo!=2);
    
    printf("%d grenais\n",count);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n",sum_of_inter,sum_of_gremio,sum_of_draw);
    if(sum_of_inter>sum_of_gremio){
    printf("Inter venceu mais\n");
    }
    else if(sum_of_gremio>sum_of_inter){
    printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
   
    return 0;
}