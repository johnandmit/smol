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
void ezcheck(int n, int s[])
{
    int i=0,yes;
    for (int e = 0; e < n; e++)
    {
        yes = 1;
        for (int a = 2; a < s[e];a++)
        {
            if(s[e]%a==0)
                yes=0;
        }
        if(yes==1){
            i++;
        }
    }
    printf("%i ",i);
}
int main()
{
    int n, s[80], x;
    printf("enter n: ");
    scanf("%i", &n);
    enterX(n,x,s);
    ezcheck(n, s);
}
