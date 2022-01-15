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
void text(float num,int ez)
{
    if (ez == 1)
    {
        if (num == 100)
            printf("mot tram ");
        if (num == 10)
            printf("muoi ");
        if (num == 1)
            printf("mot ");
    }
    if (ez == 2)
    {
        if (num == 100)
            printf("hai tram ");
        if (num == 10)
            printf("hai muoi ");
        if (num == 1)
            printf("hai ");
    }
    if (ez == 3)
    {
        if (num == 100)
            printf("ba tram ");
        if (num == 10)
            printf("ba muoi ");
        if (num == 1)
            printf("ba ");
    }
    if (ez == 4)
    {
        if (num == 100)
            printf("bon tram ");
        if (num == 10)
            printf("bon muoi ");
        if (num == 1)
            printf("bon ");
    }
    if (ez == 5)
    {
        if (num == 100)
            printf("nam tram ");
        if (num == 10)
            printf("nam muoi ");
        if (num == 1)
            printf("nam ");
    }
    if (ez == 6)
    {
        if (num == 100)
            printf("sau tram ");
        if (num == 10)
            printf("sau muoi ");
        if (num == 1)
            printf("sau ");
    }
    if (ez == 7)
    {
        if (num == 100)
            printf("bay tram ");
        if (num == 10)
            printf("bay muoi ");
        if (num == 1)
            printf("bay ");
    }
    if (ez == 8)
    {
        if (num == 100)
            printf("tam tram ");
        if (num == 10)
            printf("tam muoi ");
        if (num == 1)
            printf("tam ");
    }
    if (ez == 9)
    {
        if (num == 100)
            printf("chin tram ");
        if (num == 10)
            printf("chin muoi ");
        if (num == 1)
            printf("chin ");
    }
}
int main()
{
    int n, e,ez,temp;
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
        text(num,ez);
        num = 10;
        ez=ez*100;
        ez=temp-ez;
        temp=ez;
        ez=ez/10;
        text(num,ez);
        num = 1;
        ez=ez*10;
        ez=temp-ez;
        text(num,ez);
    }
    if (e == 2)
    {
        num = 10;
        ez=ez/num;
        text(num,ez);
        num = 1;
        ez=ez*10;
        ez=temp-ez;
        text(num,ez);
    }
    if (e == 1)
    {
        num = 1;
        ez=ez/num;
        text(num,ez);
    }
}
