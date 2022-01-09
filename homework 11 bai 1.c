#include <stdio.h>
int main(void)
{
    char s1[81], s2[81];
    printf("enter string 1:");
    gets(s1);
    printf("enter string 2:");
    gets(s2);
    printf("%s%s", s1, s2);
    return 0;
}
