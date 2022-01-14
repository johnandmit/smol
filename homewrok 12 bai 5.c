#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[1000];
    printf("enter your name:");
    gets(s);
    for(int e=0;e<strlen(s);e++)
    {
        s[e]=tolower(s[e]);
    }
    printf("%s\n",s);
    for(int e=0;e<strlen(s);e++)
    {
        s[e]=toupper(s[e]);
    }
    printf("%s",s);
}
