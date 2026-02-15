#include<stdio.h>
int main()
{   
    int num,amount;
    int balance=20000;
    printf("\t\t\t ::: Welome to 26001B Bank:::\n");
    printf("1.check balance\n 2.deposite\n 3.withdraw\n 4.exit\n ");
  printf("please select any one from the option\n");
  scanf("%d",&num);
    if(num==1){
        printf("your bank balance is: %d\n",balance);
    }
    
    else if(num==2){
        printf("Enter the amount: ");
        scanf("%d",&amount);
        balance=balance+amount;
        printf("your amt credited sucessfully: %d\n",amount);
        printf("your bank balance is : %d\n",balance);
    }
    else if(num==3){
        printf("Enter the amount: \n");
        scanf("%d",&amount);
        balance=balance-amount;
        printf("your amt debited sucessfully: %d\n",amount);
        printf("your bank balance is: %d",balance);
    }
    else if(num==4){
        printf("thankyou\n");

    }
    else{
        printf("Invalid num\n");
    }
} 
