#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s1[1000];
    int n, x, i = 0, eh, yes = 0,sum2=0;
    float ave, sum;
    printf("enter s:");
    scanf("%i", &n);
    do
    {
        printf("enter x: ");
        scanf("%i", &x);
        if (x > 0 && i <= n)
        {
            s1[i] = x;
            sum2+=s1[i];
        }
        if (x > n)
        {
            yes = 1;
        }
        i++;
    } while (i < n);
    eh = s1[0];
    for (int s = 0; s < eh; s++)
    {
        sum += s1[s];
    }
    ave = sum / eh;
    if (yes == 1)
    {
        printf("sum=%i\n", sum2);
    }
    printf("ave = %f", ave);
}
