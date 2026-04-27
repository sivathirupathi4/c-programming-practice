#include <stdio.h>
int sum_num(int n);
int main(){
    int n;
    scanf("%d",&n);
    int ret=sum_num(n);
    printf("Sum is %d",ret);
    return 0;
}
int sum_num(int n){
    static int sum=0;
    if(n>0){
        sum=sum+n;
        sum_num(n-1);
    }
    return sum;
}
