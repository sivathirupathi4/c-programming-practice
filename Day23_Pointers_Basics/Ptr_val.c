#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int *ptr=&n;
    printf("Value is %d",*ptr);
}
