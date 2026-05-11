#include <stdio.h>

void itoa(int num, char str[]);
void reverse(char str[]);
int main()
{
    
    int num;
    char str[20];
    
    printf("Enter the number:");
    if(scanf("%d", &num)!=1){
        printf("Integer to string is 0\n");
        return 0;
    }
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}
void itoa(int num,char str[]){
    int i=0;
    int sign=num;
    
    if(num<0){
        num=-num;
    }
    if(num==0){
        str[i++]='0';
        str[i]='\0';
        return;
    }
    
    while(num>0){
        int digit=num%10;
        
        str[i++]=digit+'0';
        num=num/10;
    }
    if(sign<0){
        str[i++]='-';
    }
    str[i]='\0';
    reverse(str);
}
void reverse(char str[]){
    int i=0;
    int j=0;
    char temp;
    while(str[j]!='\0'){
        j++;
    }
    j--;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
