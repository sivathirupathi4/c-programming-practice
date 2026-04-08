#include <stdio.h>
void square(int *ptr, int size);

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    square(arr,n);
    
    return 0;
}
void square(int *ptr, int size){
    for(int i=0;i<size;i++){
        *(ptr+i)=(*(ptr+i))*(*(ptr+i));
    }
    printf("Square is ");
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
}
