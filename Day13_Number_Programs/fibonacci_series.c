#include <stdio.h>
int main(){
    int val,first,second,next=0;
   
    scanf("%d",&val);
    
    if(val>=0){
        first=0;
        second=1;
        while(first<=val){
            
            
            printf(" %d",first);
        
            next=first+second;
            
            
            first=second;
            second=next;
    }
    }else{
        printf("Invalid input");
    }
}
