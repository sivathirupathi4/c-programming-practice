#include<stdio.h>
int main()
{
    char ch;
    int x,y;
printf("\t\t\t::: Calculator :::\n");

printf("Enter the operator: ");
scanf("%c",&ch);

printf("Enter two Num: ");
scanf("%d %d",&x,&y);
if(ch=='+')
{
printf("the addition of %d + %d = %d",x,y,x+y);
}
else if(ch=='-')
{
    printf("the sub of %d - %d = %d",x,y,x-y);
}
else if(ch=='*')
{
    printf("the mul of %d * %d = %d",x,y,x*y);
}
else if(ch=='/')
{
    printf("the div of %d / %d = %d",x,y,x/y);
}
else if(ch=='%')
{
    printf("the mod of %d % %d = %d",x,y,x%y);
}
else{
    printf("invalid");
}
} 
