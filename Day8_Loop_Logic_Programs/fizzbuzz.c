#include <stdio.h>
int main(){
    
    int val;
    for(int i=1;i<=100;i++){
    if(i%3==0 && i%5==0){
        printf("FizzBuzz ");
        continue;
    }
    else if(i%5==0){
        printf("Buzz ");
        continue;
    }
    else if(i%3==0){
        printf("Fizz ");
        continue;
    }
    printf("%d ",i);
    }
}
