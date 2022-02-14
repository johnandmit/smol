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
    int e,f,m;
    e=a*c;
    f=b*d;
    m=lowest_multi(e,f);
    e=e/m;
    f=f/m;
    printf("%i/%i",e,f);
}
void plus_minus(int e,int f){
    int c;
    c=lowest_multi(e,f);
    e/=c;
    f/=c;
    printf("%i/%i",e,f);
}
struct phan_so
{
    int tu_so;
    int mau_so;
};
int main(){
    int n;
    struct phan_so a[2];
    printf("enter tu so cua phan so thu nhat: ");
    scanf("%i",&a[0].tu_so);
    printf("enter tu so cua phan so thu nhat: ");
    scanf("%i",&a[0].mau_so);
    printf("enter tu so cua phan so thu hai: ");
    scanf("%i",&a[1].tu_so);
    printf("enter tu so cua phan so thu hai: ");
    scanf("%i",&a[1].mau_so);
    printf("enter 1 for plus\nenter 2 for minus\nenter 3 for devision\nenter 4 for multiplication\nenter here: ");
    scanf("%i",&n);
    switch(n)
    {
        case 1:
            plus_minus(a[0].tu_so*a[1].mau_so+a[1].tu_so*a[0].mau_so,a[0].mau_so*a[1].mau_so);
            break;
        case 2:
            plus_minus(a[0].tu_so*a[1].mau_so-a[1].tu_so*a[0].mau_so,a[0].mau_so*a[1].mau_so);
            break;
        case 3:
            multi(a[0].tu_so,a[0].mau_so,a[1].mau_so,a[1].tu_so);
            break;
        case 4:
            multi(a[0].tu_so,a[0].mau_so,a[1].tu_so,a[1].mau_so);
            break;
        default:
            break;
    }
}
