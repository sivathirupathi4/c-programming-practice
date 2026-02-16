#include <stdio.h>
int main(){

    int num;
    printf("Enter the Num: ");
    scanf("%d",&num);
    if(num<=0){
        printf("Enter the positive num \n");
        return 0;
    }

    int sum=0;

    for(int i=1;i<=num/2;i++){
        if (num%i==0){
            sum+=i;
        }

    }
    printf("sum = %d\n",sum);

    if (sum==num){
        printf("The num %d is perfect",num);
    }
    else{
        printf("The num %d is not perfect",num);
}
return 0;
}