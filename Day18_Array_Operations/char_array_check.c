#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int check,flag=0;
    scanf("%d",&check);
    
    for(int i=0;i<size;i++){
        if(arr[i]==check){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Element found\n");
    }
    else{
        printf("Not found\n");
    }
}
