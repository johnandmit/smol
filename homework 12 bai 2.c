#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s1[1000];
    char s2[1000];
    char s3[1000];
    printf("enter string: ");
    gets(s1);
    strcpy(s3,s1);
    printf("enter string: ");
    gets(s2);
    printf("string length s1,s2= %i, %i\n", strlen(s1), strlen(s2));
    strcpy(s1, s2);
    printf("s1=%s,s2=%s\n", s1, s2);
    printf("a=%i,b=%i\n", strcmp(s3, s2), strcmp(s2, s3));
    printf("if a<b then s1<s2,if a>b then s1>s2,if a=b then s1=s2\n");
    printf("s1=%s,s2=%s",strcat(s3,s2),s2);
}
