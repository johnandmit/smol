#include <stdio.h>
#include <math.h>
int lowest_multi(int a,int b){
    a=abs(a);
    b=abs(b);
while(a!=b)
    {
        if(a>b){
            a-=b;
        }
        else
            b-=a;
    }
    return a;
}
void multi(int a,int b,int c,int d)
{
    int m;
    m=lowest_multi(a*c,b*d);
    printf("%i/%i",a*c/m,b*d/m);
}
void plus_minus(int e,int f){
    int c;
    c=lowest_multi(e,f);
    printf("%i/%i",e/c,f/c);
}
struct phan_so
{
    int tu_so;
    int mau_so;
};
int main(){
    int n;
    struct phan_so a,b;
    printf("enter tu so cua phan so thu nhat: ");
    scanf("%i",&a.tu_so);
    printf("enter tu so cua phan so thu nhat: ");
    scanf("%i",&a.mau_so);
    printf("enter tu so cua phan so thu hai: ");
    scanf("%i",&b.tu_so);
    printf("enter tu so cua phan so thu hai: ");
    scanf("%i",&b.mau_so);
    printf("enter 1 for plus\nenter 2 for minus\nenter 3 for devision\nenter 4 for multiplication\nenter here: ");
    scanf("%i",&n);
    switch(n)
    {
        case 1:
            plus_minus(a.tu_so*b.mau_so+b.tu_so*a.mau_so,a.mau_so*b.mau_so);
            break;
        case 2:
            plus_minus(a.tu_so*b.mau_so-b.tu_so*a.mau_so,a.mau_so*b.mau_so);
            break;
        case 3:
            multi(a.tu_so,a.mau_so,b.mau_so,b.tu_so);
            break;
        case 4:
            multi(a.tu_so,a.mau_so,b.tu_so,b.mau_so);
            break;
        default:
            break;
    }
}
