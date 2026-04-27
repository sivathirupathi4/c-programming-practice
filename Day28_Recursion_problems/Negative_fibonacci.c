#include <stdio.h>

void negative_fibonacci(int limit, int first, int second);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    if(limit<=0){
        negative_fibonacci(limit, 0, 1);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
void negative_fibonacci(int limit, int first, int second){
    int sum;
    printf("%d",first);
    sum=first-second;
    if(second<=-limit && second>=0 || second<0 && second>=limit){
        printf(", ");
        negative_fibonacci(limit,second,sum);
    }
    
}

