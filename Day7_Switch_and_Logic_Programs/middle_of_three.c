#include <stdio.h>
int main(){
    int n1,n2,n3,mid;
    
    printf("Enter the Three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if((n1>n3 && n1<n2) || (n1<n3 && n1>n2)){
        mid=n1;
        printf("The middle number is %d",mid);
    }
    else if ((n2>n3 && n2<n1) || (n2<n3 && n2>n1)) {
        mid=n2;
        printf("The middle number is %d",mid);
    }
    else{
        mid=n3;
        printf("The middle number is %d",mid);
    }

}
