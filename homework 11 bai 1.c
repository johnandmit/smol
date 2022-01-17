#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[81], s2[81],s[82];
    printf("enter string 1:");
    fgets(s1,sizeof(s1),stdin);
    printf("enter string 2:");
    fgets(s2,sizeof(s1),stdin);
    strcat(s,s1);
    strcat(s,s2);
    printf("%s",s);
}
