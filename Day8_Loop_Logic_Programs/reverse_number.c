#include <stdio.h>
int main(){
    int n, rev=0, rem;
    //printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n>=0){
        while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
        
    }
        printf("Reversed number is %d",rev);
    }
    else{
        printf("Please enter a positive integer");
    }
    
    return 0;
}
