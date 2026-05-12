#include<stdio.h>
int main(){
    //unsigned int for hexadecimal format
    unsigned int num;
    //reading the variable in hexadecimal 
    scanf("%x",&num);
    int count=0;
    
    //checking the set bit using for loop
    for(int i=0;i<32;i++){
        if(num&(1<<i)){
            count++;
        }
    }
    printf("Number of set bits: %d",count);
    
}
