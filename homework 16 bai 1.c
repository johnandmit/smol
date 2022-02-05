#include <stdio.h>
#include <string.h>
int is_sorted(int n[])
{
    int count=0;
    for(int i=0;i<9;i++){
        if(n[i]>n[i+1])
            count++;
    }
    if(count==9||count>9){
        return 0;
    }
    return 1;
}
int main()
{
    int n[10]={9,8,7,6,5,4,3,2,1,0};
    printf("%i ",is_sorted(n));
}
