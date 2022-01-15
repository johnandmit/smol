
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    int s1[10];
    int n, i = 0, sum2 = 0, s;
    float x,ave, sum = 0;
    printf("enter s:");
    scanf("%i", &n);
    if (n < 0 || n > 10)
        return 0;
    do
    {
        printf("enter phan tu: ");
        scanf("%i", &s);
        if (i <= n)
        {
            s1[i] = s;
            sum2 = sum2 + s;
        }
        i++;
    } while (i < n);
    for (int ez = 0; ez < i; ez++)
        printf("%i ", s1[ez]);
    printf("\nenter x: ");
    scanf("%f", &x);
    if (x > n)
    {
        printf("sum = %i", sum2);
    }
    else
    {
        for (int s = 0; s < x; s++)
        {
            sum += s1[s];

        }

        ave = sum / x;
        printf("ave = %f", ave);
    }
}
