#include <stdio.h>
void arr_fun(int *ptr,int n);
void arr_fun(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    arr_fun(arr,n);
    return 0;
}
