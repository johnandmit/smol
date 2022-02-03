#include <stdio.h>
void check(int n, int m)
{
    int p=0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i==0&&m%i==0)
        {
            p++;
        }
    }
    printf("%i ",p);
}
int main()
{
    int n = 6, m = 3;
    check(n, m);
}
