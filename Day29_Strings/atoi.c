#include <stdio.h>

int my_atoi(const char *s);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
    return 0;
}
int my_atoi(const char *s){
    int num=0,sign=1;
    if(*s=='-'){
        sign=-1;
        s++;
        
        if(*s=='-' || *s=='+'){
            return 0;
        }

    }
    else if(*s=='+'){
        sign=1;
        s++;
        
        if(*s=='-' || *s=='+'){
            return 0;
        }

    }
    else if((*s<'0' && *s>'9')){
        return 0;
    }
    
    
    while(*s!='\0'){
        if(*s<'0' || *s>'9'){
            break;
        }
        num=num*10 + (*s-'0');
        s++;
    }
    return num*sign;
}
