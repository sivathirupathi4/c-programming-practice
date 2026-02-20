#include <stdio.h>
int main(){
    char dir;
    printf("Enter direction: ");
    scanf(" %c",&dir);
    
    switch(dir){
        case 'E':
        printf("East");
        break;
        
        case 'W':
        printf("West");
        break;
        
        case 'N':
        printf("North");
        break;
        
        case 'S':
        printf("South");
        break;
        
        case 'e':
        printf("East");
        break;
        
        case 'w':
        printf("West");
        break;
        
        case 'n':
        printf("North");
        break;
        
        case 's':
        printf("South");
        break;
        
        default:
        printf("Invalid input");
    }
}
