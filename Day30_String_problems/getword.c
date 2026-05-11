#include <stdio.h>

int getword(char *word);

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}
int getword(char *word){
    int len=0;
    while(*(word+len)!='\0' && *(word+len)!=' '){
        len++;
    }
    *(word+len)='\0';
    return len;
}
