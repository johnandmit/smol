#include <stdio.h>
int get_max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c && b > a)
        return b;
    else
        return c;
}
int get_min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < c && b < a)
        return b;
    else
        return c;
}
int main(void)
{
    int a = 15, b = 10, c = 5, a1, b1;
    a1 = get_max(a, b, c);
    b1 = get_min(a, b, c);
    printf("%i\n%i", a1, b1);
}
