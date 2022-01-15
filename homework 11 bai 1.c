#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[81], s2[81],s[82];
    printf("enter string 1:");
    gets(s1);
    printf("enter string 2:");
    gets(s2);
    strcat(s,s1);
    strcat(s,s2);
    printf("%s",s);
}
