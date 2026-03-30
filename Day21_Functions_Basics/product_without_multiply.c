#include <stdio.h>
void product(int n1,int n2)
{
    int sum=0;
    for(int i=1;i<=n2;i++)
    {
        sum+=n1;
    }
    printf("Product of two numbers is %d",sum);
}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    
    product(n1,n2);
    return 0;
}
