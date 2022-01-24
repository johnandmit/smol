#include <stdio.h>
#include <string.h>
int ezcheck(char s[],char e[])
{
    if (strcmp(s, e)==0)
        return 1;
    else
        return 0;
}
int main()
{
    char s[50],e[50];
    printf("enter s: ");
    gets(s);
    printf("enter 3: ");
    gets(e);
    strrev(e);
    printf("%i",ezcheck(s,e));
}
