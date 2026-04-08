#include <stdio.h>
void average(int *ptr,int n);
int main(){
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    average(arr,size);
    return 0;
}
void average(int *ptr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(*(ptr+i));
    }
    float avg=(float)sum/n;
    printf("Average is %g",avg);
}
