#include <stdio.h>
int main()
{
    int n, a[100], x, sum = 0;
    printf("enter n: ");
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter stuff in array: ");
        scanf("%i", &x);
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > a[i - 1]) && (a[i] > a[i + 1] || i == 0) && (a[0] > a[1] || i == n - 1) && (a[n - 1] > a[n - 2]))
        {
            sum += a[i];
            printf("%i ", a[i]);
        }
    }
    printf("\nsum = %i", sum);
}
