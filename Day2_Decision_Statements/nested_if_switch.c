#include <stdio.h>
int main(){
    int x,y,z,mid;
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y&&x<z || x>z&&x<y){
        printf("mid no is: %d",x);
    }
    else if (y>x&&y<z || y>z&&y<x){
        printf("mid no is: %d",y);
    }
     else{
        printf("mid no is: %d",z);
    }
}
