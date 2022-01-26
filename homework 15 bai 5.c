#include <stdio.h>
#include <string.h>
#include <math.h>
void ezcheck(int m, int n)
{
    int e=0,a=0;
    for (int i = 1; i < m; i++)
    {
        if (m % i == 0)
        {
            e = e + i;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            a = a + i;
        }
    }
    if(e==n&&a==m){
        printf("%i va %i la so than thiet",m,n);
    }
}
int main()
{
    int m, n;
    printf("enter m: ");
    scanf("%i", &m);
    printf("enter n: ");
    scanf("%i", &n);
    ezcheck(m,n);
}
