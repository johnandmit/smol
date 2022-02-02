#include <stdio.h>
void check(int n)
{
    int yes, sum;
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
            printf("%i ", i);
        }
    }
}
int main()
{
    int n = 4;
    check(n);
}
