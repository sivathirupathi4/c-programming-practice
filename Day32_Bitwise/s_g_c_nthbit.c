#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%x",&num);
    int n;
    scanf("%d",&n);
    
    int set_bit;
    int clear_bit;
    int get_bit;
    
    int mask;
    mask=1<<n;
    set_bit=num|mask;
    clear_bit=num&~mask;
    // get_bit=num&1<<n;
    
    if(num&(1<<n)){
        get_bit=1;
    }
    else{
        get_bit=0;
    }
    
    printf("Result after setting nth bit is : %x\n",set_bit);
    printf("Result after clearing nth bit is : %x\n",clear_bit);
    printf("Get bit at nth position is: %x\n",get_bit);

    
    
}
