#include <stdio.h>
void fun(int *num);
int rem=0;
int sum=0;
int main(){
    int num;
    scanf("%d",&num);
    fun(&num);
    printf("Sum of the digits is %d",sum);
    return 0;
}
void fun(int *num){
    while(*num>0){
    rem=*num%10;
    sum=sum+rem;
    *num=*num/10;
    fun(num);
    }
}
