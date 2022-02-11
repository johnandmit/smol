#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct date
{
    int month;
    int day;
    int year;
};
int main()
{
    struct date a;
    int yes = 0;
    printf("enter day: ");
    scanf("%i", &a.day);
    printf("enter month: ");
    scanf("%i", &a.month);
    printf("enter year: ");
    scanf("%i", &a.year);
    printf("day = %i\nmonth = %i\nyear = %i\n", a.day, a.month, a.year);
    if (a.year % 100 == 0 && a.year % 400 == 0 && a.month == 2)
    {
        yes = 1;
    }
    if (a.year % 4 == 0 && a.year % 100 != 0 && a.year % 400 != 0 && a.month == 2)
    {
        yes = 1;
    }
    if (a.day<=0||a.month<=0||a.day>29&&a.month==2||(a.month == 1 && a.day > 32) || (a.month == 2 && (a.day > 30)||a.day==29&&yes==0) || (a.month == 3 && a.day > 32) || (a.month == 4 && a.day > 31) || (a.month == 5 && a.day > 32) || (a.month == 6 && a.day > 31) || (a.month == 7 && a.day > 32) || (a.month == 8 && a.day > 32) || (a.month == 9 && a.day > 31) || (a.month == 10 && a.day > 32) || (a.month == 11 && a.day > 31) || (a.month == 12 && a.day > 32) || a.month > 12)
    {
        printf("learn more");
    }
    if ((a.month == 1 && a.day == 32) || (a.month == 2 && a.day >= 28) || (a.month == 3 && a.day == 32) || (a.month == 4 && a.day == 31) || (a.month == 5 && a.day == 32) || (a.month == 6 && a.day == 31) || (a.month == 7 && a.day == 32) || (a.month == 8 && a.day == 32) || (a.month == 9 && a.day == 31) || (a.month == 10 && a.day == 32) || (a.month == 11 && a.day == 31) || (a.month == 12 && a.day == 32))
    {
        if (a.day == 28 && yes == 1)
        {
            a.month = 2;
            a.day = 29;
        }
        else if (a.month != 12)
        {
            a.month += 1;
            a.day = 1;
        }
        if (a.month == 12)
        {
            a.year += 1;
            a.month = 1;
            a.day = 1;
        }
    }
    else
    {
        a.day++;
    }
    printf("\nday = %i\nmonth = %i\nyear = %i\n", a.day, a.month, a.year);
}
