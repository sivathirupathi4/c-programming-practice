#include<stdio.h>
int main(){
    unsigned int n,m;
    //printf("Enter the hexa decimal number: ");
    scanf("%x",&n);
    //printf("Enter the number of bits in decimal : ");
    scanf("%u",&m);
    
    printf("After setting %d bits from lsb : %x\n",m,n|(1<<m)-1);
    printf("After clearing %d bits from lsb : %x\n",m,n&~((1<<m)-1));
    printf("After getting %d bits from lsb : %x\n",m,n&(1<<m)-1);
}
