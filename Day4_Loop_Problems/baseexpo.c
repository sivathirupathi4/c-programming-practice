#include <stdio.h>
int main(){
    int base,expo;

    printf("Enter the base val: ");
    scanf("%d",&base);

    printf("Enter the expo val: ");
    scanf("%d",&expo);

    int power=1;
    for(int i=1;i<=expo;i++){
        power = power * base;
    }
    printf("%d",power);
return 0;
}