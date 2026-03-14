#include <stdio.h>
int main()
{
    int val,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    val=n;
    int rem,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==val)
    {
        printf("The Entered number is an palindrome.");
    }
    else
    {
        printf("The Entered number is not an palindrome.");
    }
}
