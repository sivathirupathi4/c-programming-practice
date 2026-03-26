#include <stdio.h>
int main(){
     int size;
     scanf("%d",&size);
     
     int arr[size],count=0;
     for(int i=0;i<size;i++){
         scanf("%d",&arr[i]);
     }
     int uniq_arr[size];
     for(int i=0;i<size;i++){
         int flag=0;
         for(int j=0;j<count;j++){
             if(arr[i]==uniq_arr[j]){
                 flag=1;
                 break;
             }
         }
         if(flag==0){
             uniq_arr[count]=arr[i];
             count++;
         }
     }
     printf("Unique array elements: \n");
     for(int i=0;i<count;i++){
         printf("%d ",uniq_arr[i]);
     }
     return 0;
}
