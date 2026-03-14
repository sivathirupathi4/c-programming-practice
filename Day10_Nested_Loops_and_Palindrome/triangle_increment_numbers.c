#include <stdio.h>
int main()
{
    int n,extra=1;
    //printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",extra);
            extra++;
        }
                printf("\n");
    }
}
