#include <stdio.h>

int my_isalnum(int cha){
    if((cha >= 'a' && cha<='z')||(cha >= 'A' && cha<='Z')||(cha>='0' && cha<='9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character: \n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    if(ret!=0)
    {
        printf("Entered character is alphanumeric character\n");
    }
    else
    {
        printf("Entered character is not alphanumeric character\n");
    }
    return 0;
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
}
