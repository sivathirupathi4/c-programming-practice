#include <stdio.h>
int main(){
    int m,n;
    //printf("Enter the 'm' value for Array A: ");
    scanf("%d",&m);
    //printf("Enter the 'n' value for Array B: ");
    scanf("%d",&n);
    
    int arrA[m],arrB[n];
    //printf("Enter the elements one by one for Array A: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arrA[i]);
    }
    //printf("Enter the elements one by one for Array B: ");
    for(int j=0;j<n;j++){
        scanf("%d",&arrB[j]);
    }
    //sorting A
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(arrA[j]>arrA[j+1]){
               int temp=arrA[j];
               arrA[j]=arrA[j+1];
               arrA[j+1]=temp;
            }
        }
    }
    //sorting B
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arrB[j]>arrB[j+1]){
               int temp=arrB[j];
               arrB[j]=arrB[j+1];
               arrB[j+1]=temp;
            }
        }
    }
    
    float med1,med2,med3;
    
    //med of A
    if(m%2==0){
        med1=(arrA[m/2]+arrA[(m/2)-1])/2.0;
    }
    else{
        med1=arrA[m/2];
    }
    
    //med of B
    if(n%2==0){
        med2=(arrB[n/2]+arrB[(n/2)-1])/2.0;
    }
    else{
        med2=arrB[n/2];
    }
    
    printf("Median of array1 : %g\n",med1);
    printf("Median of array2 : %g\n",med2);
    
    med3=(med1+med2)/2.0;
    
    printf("Median of both arrays : %g\n",med3);
}

