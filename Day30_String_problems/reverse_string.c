#include <stdio.h>
#include <string.h>

void reverse_iterative(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}
void reverse_iterative(char *str){
    char *first=str;
    char *len=str+strlen(str)-1;
    while(first<len){
        char temp=*first;
        *first=*len;
        *len=temp;
        
        first++;
        len--;
    }
}
