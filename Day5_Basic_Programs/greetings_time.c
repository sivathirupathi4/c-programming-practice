#include <stdio.h>
int main(){
    int n;
    printf("Enter the hour (0-23): ");
    scanf("%d",&n);
    
    if(5<=n && n<=11){
        printf("Good morning!");
    }
    else if(12<=n && n<=15){
        printf("Good afternoon!");
    }
    else if(16<=n && n<=21){
        printf("Good evening!");
    }
    else if((22<=n&&n<=23) || n<=4){
        printf("Good night!");
    }
    else{
        printf("Invalid hour!");
    }
}
