#include <stdio.h>
int main(){
    int n1,n2,output;
    char ope;
    
    scanf("%d %c %d",&n1 ,&ope ,&n2);
    
    switch(ope){
    case '+':
    output=n1+n2;
    printf("Output: %d",output);
    break;
    
    case '-':
    output=n1-n2;
    printf("Output: %d",output);
    break;
    
    case '*':
    output=n1*n2;
    printf("Output: %d",output);
    break;
    
    case '/':
    output=n1/n2;
    printf("Output: %d",output);
    break;
    
    default:
    printf("Invalid operation!");
}
    
}
