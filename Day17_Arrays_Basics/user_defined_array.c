#include <stdio.h>
int main(){
    int size;
    //printf("Enter the size of an array");
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    
}
