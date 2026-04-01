#include <stdio.h>
int main(){
    float age;
    scanf("%f",&age);
    
    float *ptr=&age;
    *ptr=20+age;
    printf("Age after increasing by 20 is %g",age);
}
