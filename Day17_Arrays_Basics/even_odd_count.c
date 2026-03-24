#include <stdio.h>
int main(){
    int size,count;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("Even count: %d\n",count);
    count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("Odd count: %d\n",count);
}
