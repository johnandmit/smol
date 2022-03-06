#include <stdio.h>

int main(){
    int n,array[11];
    printf("enter n: ");
    scanf("%i",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("enter x: ");
        scanf("%i",&x);
        array[i]=x;
    }
    for(int i=0;i<n;i++){
        printf("array[%i] co dia chi la: %i\n",i,&array[i]);
    }
}
