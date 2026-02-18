#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    
    if(ch>='A' && ch<='Z'){
        printf("The character is Upper Case.");
    }
    else if(ch>='a' && ch<='z'){
        printf("The character is Lower Case.");
    }
    else if(ch>='0' && ch<='9'){
        printf("The character is Digit.");
    }
    else{
        printf("The character not an alphabet or digit.");
    }
    
}
