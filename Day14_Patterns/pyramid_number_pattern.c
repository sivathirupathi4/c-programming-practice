#include <stdio.h>
int main()
{
    int n;
    //printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int k=2;k<=n;k++)
    {
        for(int l=k;l<=n;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}
