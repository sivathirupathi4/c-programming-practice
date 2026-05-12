#include<stdio.h>
struct person{
    char ch;
    int x;
    float y;
    char name[20];
};
int main(){
    struct person p;
    //printf("Enter the  character: ");
    scanf("%c",&p.ch);
    //printf("Enter integer value: ");
    scanf("%d",&p.x);
    //printf("Enter the float value: ");
    scanf("%f",&p.y);
    //printf("Enter the name: ");
    scanf(" %[^\n]",p.name);
    
    printf("%c %d %g %s",p.ch,p.x,p.y,p.name);
    return 0;
}
