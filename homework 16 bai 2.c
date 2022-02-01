#include <stdio.h>
int t(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return 1;
    }
    if (n > 3)
    {
        return t(n - 1) + t(n - 2) + t(n - 3);
    }
}
int main()
{
    int n = 4;
    printf("t(%i)=%i ", n, t(n));
}
