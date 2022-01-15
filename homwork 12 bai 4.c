#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[8];
    int n, i = 0, tmp, k, viTriMax, e;
    do
    {
        printf("enter n:");
        scanf("%i", &n);
        if (i >= 7 || n == 0)
            break;
        s[i] = n;
        i++;
    } while (1);
    printf("%i", s[0]);
    for (e = 1; e < i; e++)
    {
        printf(",%i", s[e]);
    }
    k = i;
    printf("\n");
    while (k >= 0)
    {
        viTriMax = 0;
        for (e = 0; e <= k; e++)
            if (abs(s[e]) > abs(s[viTriMax]))
                viTriMax = e;
        tmp = s[viTriMax];
        s[viTriMax] = s[k];
        s[k] = tmp;

        k--;
    }
    for (e = 1; e <= i; e++)
        printf("%d, ", s[e]);
    printf("\n");
}
