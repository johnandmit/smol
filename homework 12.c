#include <math.h>
#include <stdio.h>
#define true 1
#define false 0

int main()
{
    int counter = 0,big=0,small=0,counter1;
    float average,sum=0,x;
    int a[1000];
    while (true)
    {
        printf("enter n: ");
        scanf("%f", &x);
        if(x == 0)
            break;
        a[counter] = x;
        counter++;
    };
    counter1 = counter;
    counter = 0;
    small=a[0];
    big=a[0];
    for (; counter < counter1; counter++)
    {   
        sum+=a[counter];
        if(a[counter]>big){
            big=a[counter];
        }
        if(a[counter]<small){
            small=a[counter];
        }
    }
    average=sum/counter1;
    printf("the biggest number is:%i\nthe smallest number is:%i\nthe average is:%f",big,small,average);
    }
