#include <stdio.h>
#include <math.h>
int ucln(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int bcnn(int a, int b)
{
    return a * b / ucln(a, b);
}
int main()
{
    int a = 5, b = 4;
    printf("ucln=%i\n", ucln(a, b));
    printf("bcnn=%i\n", bcnn(a, b));
}
