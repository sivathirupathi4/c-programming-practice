#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
    fact = fact*i;
    }
    printf("FACTORIAL OF %d IS %d\n",num,fact);
    return 0;
}