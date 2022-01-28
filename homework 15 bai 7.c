#include <stdio.h>
#include <math.h>
void ezcheck(int n)
{
    int i=0,yes,sum=0;

    for (int e = 0; e < n; e++)
    {
        yes=1;
        for (int a = 2; a < e;a++)
        {
            if(e%a==0){
                yes=0;}
        }
        if(yes==1&&e!=0&&e!=1){
            sum=sum+e;
            printf("%i ",e);
        }
    }
    printf("sum = %i ",sum);
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%i", &n);
    ezcheck(n);
}
