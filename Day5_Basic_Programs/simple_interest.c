#include <stdio.h>
int main(){
  
    float principal_amount,simple_interest;
    int time_period,rate_of_interest;
  
    scanf("%f %d %d",&principal_amount,&rate_of_interest,&time_period);
    simple_interest=(principal_amount*rate_of_interest*time_period)/100;
  
        printf("%g",simple_interest);
}
