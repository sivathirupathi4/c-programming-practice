#include <stdio.h>
int rec(int n){
    if(n<=1){
        return n;
    }
    return n+rec(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    
    int ret=rec(n);
    printf("Sum of 1st %d numbers is %d",n,ret);
    return 0;
}
