#include <stdio.h>
int main(){
    int s1,s2,count=0;
    scanf("%d %d",&s1,&s2);
    
    printf("Enter the array1 elements : ");
    int arr1[s1];
    for(int i=0;i<s1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements : ");
    int arr2[s2];
    for(int i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
    }
    
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                break;
            }
        }
    }
    if(count==s1){
        printf("Array elements are equal");
    }
    else{
        printf("Array elements are not equal");
    }
    return 0;
}
