#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    
    int arr[s];
    printf("Enter the array elements : ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=1;i<s;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
    }
    printf("largest element is : %d",largest);
    return 0;
}
