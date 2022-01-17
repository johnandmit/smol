#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s[1000];
    printf("enter string: ");
    gets(s);
    char s1[1000];
    printf("enter string1: ");
    gets(s1);
    if(strcmp(s,s1)==0)
    printf("s=s1");
    else{
        printf("s1!=s");
    }
}
