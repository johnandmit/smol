#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[8];
    int n,i=0, tmp,k,viTriMax,e;
    do{
        printf("enter n:");
        scanf("%i",&n);
        s[i]=n;
        i++;
    }while(i<7&&n!=0);
    printf("%i",s[0]);
    for(e=1;e<i;e++){
        printf(",%i",s[e]);
    }
    k=i+1;
    printf("\n");
    while (k > 1)
    {
        viTriMax = 0;
        for (e = 1; e < k; e++)
            if (abs(s[e]) > abs(s[viTriMax]))
                viTriMax = e;
        tmp = s[viTriMax];
        s[viTriMax] = s[k - 1];
        s[k - 1] = tmp;

        k = k - 1;
    }
    for (e = 1; e <= i; e++)
        printf("%d, ", s[e]);
    printf("\n");
}
