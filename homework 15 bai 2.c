#include <stdio.h>
#include <ctype.h>
int check(char s[], int n)
{
    int yes = 1;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]) == 1)
        {
            yes = 0;
        }
    }
    return yes;
}
int main()
{
    char s[8] = "hien lUn";
    printf("%i",check(s,8));
}
