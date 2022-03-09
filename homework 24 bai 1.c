#include <stdio.h>

int main(){
    int a=8,*p=&a;
    printf("dia chi cau a = %i,gia tri cua a = %i",&a,a);
    printf("\ndia tri p tro den = %i, gia tri p tro den = %i",p,*p);
    *p=1;
    printf("\ndia chi cau a = %i,gia tri cua a = %i",&a,a);
    printf("\ndia tri p tro den = %i, gia tri p tro den = %i",p,*p);
}
