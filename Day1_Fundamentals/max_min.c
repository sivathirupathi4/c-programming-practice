#include<stdio.h>
int main()
{
    int x,y,z;
    int max;
printf("Enter three num:\n");
scanf("%d %d %d",&x,&y,&z);
if(x>y){
    if(x>z){
        printf("x is greater");
    }
    else{
        printf("z is greater");
    }
}
else
{
    if(y>z){
    printf("y is greater");
}
else{
    printf("invalid");
}
}
}
