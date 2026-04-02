#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    
    char *ptr=(char *)&x;
    if(*ptr){
        printf("Ours is a Little endian");
    }
    else{
        printf("Ours is a Big endian");
    }
}
