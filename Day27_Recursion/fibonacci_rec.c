#include <stdio.h>

void positive_fibonacci(int limit, int first, int second);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit>=0){
    positive_fibonacci(limit, 0, 1);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
void positive_fibonacci(int limit, int first, int second){
    int sum;
    printf("%d",first);
    sum=first+second;
    if(second<=limit){
        printf(", ");
        positive_fibonacci(limit,second,sum);
    }
}
