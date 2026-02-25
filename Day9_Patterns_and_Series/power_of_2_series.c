#include <stdio.h>
int main(){
    int n,val=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(n>=1){
        for(int i=1;i<=n;i++){
            printf("%d ",val);
            val=val*2;
        }
    }
    else{
        printf("Error : Number should be an positive number.");
    }
}
