#include <stdio.h>
int main(){
    int size;
    //printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int odd_arr,even_arr;
    
    printf("Odd array elements: ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            odd_arr=arr[i];
            printf("%d ",odd_arr);
        }
        
    }
    printf("\n");
    printf("Even array elements: ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_arr=arr[i];
            printf("%d ",even_arr);
        }
        
    }
    printf("\n");
    
    
}
