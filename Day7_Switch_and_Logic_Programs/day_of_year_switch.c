#include <stdio.h>
int main(){
    int n,option;
    scanf("%d",&n);
    
    if(n<1 || n>365){
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
    }
    if(n>=1 && n<=365){
    scanf("%d",&option);
    if(option<=0 || option>=8){
        printf("Error: Invalid input, first day should be > 0 and <= 7");
    }else{
        int val=(n+option-1)%7;
        if (val==0){
            val=7;
        }
        switch(val){
            case 1:
            printf("The day is Sunday");
            break;
            case 2:
            printf("The day is Monday");
            break;
            case 3:
            printf("The day is Tuesday");
            break;
            case 4:
            printf("The day is Wednesday");
            break;
            case 5:
            printf("The day is Thursday");
            break;
            case 6:
            printf("The day is Friday");
            break;
            case 7:
            printf("The day is Saturday");
            break;
        }
    }
    }
    return 0;
}
