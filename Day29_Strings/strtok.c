#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
    
    //printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}
char *my_strtok(char str[], const char delim[]){
    static char *ptr;
    char *start;
    
    if(str!=NULL){
        ptr=str;
    }
    
    if(ptr==NULL){
        return NULL;
    }
    
    while(*ptr && strchr(delim, *ptr)){
        ptr++;
    }
    if(*ptr=='\0'){
        ptr=NULL;
        return NULL;
    }
    start=ptr;
    while(*ptr && !strchr(delim, *ptr)){
        ptr++;
    }
    if(*ptr){
        *ptr='\0';
        ptr++;
    }
    else{
        ptr=NULL;
    }
    return start;
}






