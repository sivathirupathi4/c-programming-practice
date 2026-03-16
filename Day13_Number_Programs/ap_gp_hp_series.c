#include <stdio.h>
int main()
{
    int a,r,n;
    printf("Enter the First Number 'A': ");
    scanf("%d",&a);
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&r);
    printf("Enter the Number of terms 'N': ");
    scanf("%d",&n);
    
    if(n>0)
{
    int AP=a;
    printf("AP = ");
    for(int i=1;i<=n;i++)
{
        printf("%d, ",AP);
        AP=AP+r;
    }
    printf("\n");
    
    int GP=a;
    printf("GP = ");
    for(int j=1;j<=n;j++)
{
        printf("%d, ",GP);
        GP=GP*r;
    }
    printf("\n");
    
    float HP=1;
    AP=a;
    printf("HP =");
    for(int i=1;i<=n;i++)
{
        
        printf(" %f, ",((float)HP)/AP);
        AP=AP+r;
    }
    }
    else{
        printf("Invalid input");
    }
    
}
