#include <stdio.h>
void add(int n1,int n2){
    int sum=n1+n2;
    printf("Sum of two numbers is %d",sum);
}
void sub(int n1,int n2){
    int sum=n1-n2;
    printf("Sub of two numbers is %d",sum);
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    add(n1,n2);
}
