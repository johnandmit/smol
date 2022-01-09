#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s[1000];
    int up = 0, low = 0, num = 0;
    printf("enter string: ");
    gets(s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (islower(s[i]) != 0)
            low++;
        if (isupper(s[i]) != 0)
            up++;
        if (isdigit(s[i]) != 0)
            num++;
    }
    printf("the upper digits in s=%i\nthe lower digits in s=%i\nthe time number appear in s=%i", up, low, num);
}
