#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s1[1000];
    char s2[1000];
    printf("enter string: ");
    gets(s1);
    printf("enter string: ");
    gets(s2);
    printf("string length s1,s2= %i, %i\n", strlen(s1), strlen(s2));
    strcpy(s1, s2);
    printf("s1=%s,s2=%s\n", s1, s2);
    printf(" strcmp(s1, s2)=%i,strcmp(s2, s1)=%i\n", strcmp(s1, s2), strcmp(s2, s1));
    printf("if strcmp(s1, s2)<0 then s1<s2\nif strcmp(s2, s1)<0 then s2<s1\nif strcmp(s1, s2)=0 then s1=s2\n");
    printf("s1=%s,s2=%s",strcat(s1,s2),s2);
}
