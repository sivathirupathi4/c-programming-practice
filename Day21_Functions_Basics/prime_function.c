#include <stdio.h>

int is_prime(int num);
void generate_prime(int limit);

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}

int is_prime(int num){
    if(num<2){
        return 0;
    }
    
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void generate_prime(int limit)
{
    for(int i=2;i<=limit;i++)
    {
        if(is_prime(i))
        {
            printf("%d ",i);
        }
    }
}


