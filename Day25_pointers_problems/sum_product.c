#include <stdio.h>
void sum_product(int *ptr1,int *ptr2);

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *ptr1=&n;
    int *ptr2=&m;
    sum_product(ptr1,ptr2);
    return 0;
}
void sum_product(int *ptr1,int *ptr2){
    int add=*ptr1+*ptr2;
    printf("sum = %d\n",add);
    int mul=(*ptr1)*(*ptr2);
    printf("product = %d\n",mul);
}
