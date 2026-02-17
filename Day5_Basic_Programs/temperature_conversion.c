#include <stdio.h>
int main(){
    int fahrenheit;
    float celsius;
    
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit-32.0)*5/9;
    
    printf("%f",celsius);
}
