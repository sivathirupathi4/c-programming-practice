#include <stdio.h>
int main(){
    int n,m;
    //printf("Enter n : ");
    scanf("%d",&n);
    //printf("Enter m : ");
    scanf("%d",&m);
    
    int side=(n-m)/2;
    for(int i=0;i<m;i++)
    {
        printf("$");
    }
    for(int j=0;j<side;j++)
    {
            printf("*");
    }
    for(int i=0;i<m;i++)
    {
        printf("$");
    }
    
}
