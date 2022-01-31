#include <stdio.h>
int is_sorted(int n[])
{
    for(int i=0;i<9;i++){
        if(n[i]>=n[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int n[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%i ",is_sorted(n));
}
