#include <stdio.h>
void s_to_s(int *ptr,int size);
void display(int *ptr,int size);
int main(){
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements before squaring : ");
    display(arr,size);
    s_to_s(arr,size);
    printf("\nArray elements after squaring : ");
    display(arr,size);
    return 0;
}

void display(int *ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
}

void s_to_s(int *ptr,int size){
    for(int i=0;i<size;i++){
        int val=*(ptr+i);
        *(ptr+i)=val*val;
    }
}
