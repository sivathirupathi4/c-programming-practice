#include <stdio.h>

int main()
{
    static int num,count=0;
    if(count==0){
    //printf("Enter the value of N : ");
    scanf("%d",&num);
    }
    if(num>0){
    count=1;
    static unsigned long long int fact = 1;
    
    fact=fact*num;
    num=num-1;
    if(num==1){
        printf("Factorial of the given number is %lld",fact);
        return 0;
    }
    main();
    }
    else if(num==0){
        printf("Factorial of the given number is 1");
    }
    else{
        printf("Invalid Input");
    }
}
