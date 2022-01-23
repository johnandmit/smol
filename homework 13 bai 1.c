#include <stdio.h>
#include <math.h>
#include <string.h>
int check(int n)
{
    if (n < 0 || n > 1000)
    {
        printf("invalid");
        return 0;
    }
}
int sort(int n, float num)
{
    if (n >= 100)
    {
        return 3;
    }
    if (n > 10 && n < 100)
    {
        return 2;
    }
    if (n > 1 && n < 10)
    {
        return 1;
    }
}
void text(float num,int ez,int temp)
{
    if(num!=10){
    if (ez == 1)
        printf("mot ");    
    }
    if (ez == 2)
        printf("hai ");
    if (ez == 3)
        printf("ba ");
    if (ez == 4)
        printf("bon ");
    if (ez == 5)
        printf("nam ");
    if (ez == 6)
        printf("sau ");
    if (ez == 7)
        printf("bay ");
    if (ez == 8)
        printf("tam ");
    if (ez == 9)
        printf("chin ");
    if (num == 100)
        printf("tram ");
    if (num == 10)
        if(ez == 0)
            printf("linh ");
        else
            printf("muoi ");
}
int main()
{
    int n, e,ez,temp,a;
    float num;
    printf("enter number: ");
    scanf("%i", &n);
    
    if (check(n) == 0)
        return 0;
    e = sort(n, num);
    ez=n;
    temp=n;
    if (e == 3)
    {
        num = 100;
        ez=ez/num;
        text(num,ez,temp);
        num = 10;
        ez=ez*100;
        ez=temp-ez;
        a=ez;
        ez=ez/10;
        temp=ez*10;
        text(num,ez,temp);
        num = 1;
        ez=ez*10;
        ez=a-ez;
        text(num,ez,temp);
    }
    if (e == 2)
    {
        a=ez;
        num = 10;
        ez=ez/num;
        temp=ez*10;
        text(num,ez,temp);
        num = 1;
        ez=ez*10;
        ez=a-ez;
        text(num,ez,temp);
    }
    if (e == 1)
    {
        num = 1;
        ez=ez/num;
        text(num,ez,temp);
    }
}
