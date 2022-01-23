#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[1000], s1[1000];
    int yes = 1;
    printf("enter s: ");
    gets(s);
    printf("enter s1: ");
    gets(s1);
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s[i])
        {
            yes = 0;
            break;
        }
    }
    if (yes == 1)
    {
        printf("s bat dau = s1");
    }
    else
    {
        printf("s khong bat dau =s1");
    }
}
