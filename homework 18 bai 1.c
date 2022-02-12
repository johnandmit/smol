#include <stdio.h>
#include <math.h>
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
    printf("\nday = %.2i\nmonth = %.2i\nyear = %.4i\n", a.day, a.month, a.year);
    if (a.year % 100 == 0)
    {
        if (a.year % 400 == 0)
        {
            yes = 1;
        }
    }
    else if (a.year % 4 == 0)
    {
        yes = 1;
    }
    if (a.day > 31 || a.month == 2 && (yes && a.day > 29 || !yes && a.day > 28) || a.month > 12 || a.month < 1 || a.day < 1 || a.day > (30 + ((a.month + (a.month > 7)) % 2)))
    {
        printf("GO BACK TO KINDEGARTEN YOU BLOB OF MEAT");
        return 0;
    }
    if (a.day == 29 && yes)
    {
        a.month = 3;
        a.day = 1;
    }
    else if (a.month == 12 && a.day == 31)
    {
        a.year++;
        a.month = 1;
        a.day = 1;
    }
    else
    {
        if ((a.month + (a.month > 7)) % 2)
        {
            if(a.day > 30){
                a.month++;
                a.day = 1;
            }else{
                a.day++;
            }
        }else{
            if(a.day > 29){
                a.month++;
                a.day = 1;
            }else{
                a.day++;
            }
        }
        
    }
    printf("\nday = %.2i\nmonth = %.2i\nyear = %.4i\n", a.day, a.month, a.year);
}
