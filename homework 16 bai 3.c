#include <stdio.h>
void check(int n)
{
    int yes, sum,sum1=0;
    for (int i = 2; i < n; i++)
    {
        yes = 1;
        sum = 0;
        for (int e = 1; e < i; e++)
        {
            if (i % e == 0)
            {
                sum += e;
            }
        }
        if (sum == i)
        {
            sum1+=sum;
            printf("%i ", i);
        }
    }
    printf("\nsum = %i",sum1);
}
int main()
{
    int n = 50;
    check(n);
}
