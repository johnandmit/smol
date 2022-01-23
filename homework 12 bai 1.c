#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s[1000];
    int yeMan=0;
    printf("enter string: ");
    gets(s);
    for(int i=strlen(s)-1;i>=0;i--){
        printf("%c",s[i]);
    }
}
