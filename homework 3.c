#include <math.h>
#include <stdio.h>
int main()
{
    int n, ez = 1;
    do
    {
        printf("value of n: ");
        scanf("%i", &n);
    } while (n > 15 || n <= 0);
    
    for (int a = 1;a < n; a++)
    {
        if (a % 2 == 0)
        {
            ez *= a;
        }
    }
    printf("%i\n", ez);
}
