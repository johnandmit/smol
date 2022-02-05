#include <stdio.h>
#include <math.h>
void enterX(int n,int x,int s[]){
    for (int e = 0; e < n; e++)
    {
        printf("enter x: ");
        scanf("%i", &x);
        s[e] = x;
    }
}
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
void ezcheck(int n, int s[])
{
    int i=0;
    for (int e = 0; e < n; e++)
    {
        if(isPrime(s[e])==1)
            printf("%i ",s[e]);
    }
}
int main()
{
    int n, s[80], x;
    printf("enter n: ");
    scanf("%i", &n);
    enterX(n,x,s);
    ezcheck(n, s);
}
