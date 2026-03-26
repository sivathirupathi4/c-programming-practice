#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements before reversing: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Elements after reversing: \n");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
