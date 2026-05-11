#include <stdio.h>
#include <string.h>
void replace_blank(char str[]);

int main()
{
    char str[150];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}
void replace_blank(char str[]){
    int i=0,j=0;
    while(str[i]!='\0'){
        str[j]=str[i];
        if(str[i]=='\t'){
            while(str[i]=='\t'){
                i++;
            }
            str[j]=' ';
        }
        else if(str[i]==' '){
            while(str[i]==' '){
               i++;            
            }
            str[j]=' ';
        }
        else{
            i++;
        }
        j++;
    }
    str[j]='\0';
}
