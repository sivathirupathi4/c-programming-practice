#include <stdio.h>
int main()
{
    int lines;
    scanf("%d",&lines);
    
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=lines;j++)
        {
            if((i==j) || (i+j)==(lines+1))
            {
                printf("%d",j);
                
            }
            else
            {
                printf(" ");
            }
            
            }
            printf("\n");
    }
}
