#include <stdio.h>
void B_swap(int m,int n);
void A_swap(int *ptr1,int *ptr2);
int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    int *ptr1=&m;
    int *ptr2=&n;
    B_swap(m,n);
    A_swap(ptr1,ptr2);
    return 0;
}
void B_swap(int m,int n){
    printf("Before swap : \nnum1 is %d\nnum2 is %d\n",m,n);
}
void A_swap(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swap : \nnum1 is %d\nnum2 is %d\n", *ptr1, *ptr2);
}
