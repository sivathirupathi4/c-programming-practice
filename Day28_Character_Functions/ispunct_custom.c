#include <stdio.h>

int my_ispunct(int ch){
    if((ch>=33 && ch<=126) && !((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')))
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
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    if(ret!=0)
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
}
