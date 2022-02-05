#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if(n<2)
        return 0;
    else{
        for (int a = 2; a < n;a++)
        {
            if(n%a==0)
                return 0;
        }
        return 1;
        }
}
void ezcheck(int n)
{
    int i = 0, yes, sum = 0;

    for (int e = 2; e < n; e++)
    {
        if (isPrime(e) == 1)
        {
            sum = sum + e;
            printf("%i\n", e);
        }
    }
    printf("sum = %i ", sum);
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%i", &n);
    ezcheck(n);
}
