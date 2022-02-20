#include <stdio.h>
#include <math.h>
struct phan_so
{
    int tu_so;
    int mau_so;
};
struct phan_so simplify(struct phan_so p){
    int a=abs(p.tu_so),b=abs(p.mau_so);
    while(a!=b)
        if(a>b)
            a-=b;
        else
            b-=a;
    p.tu_so /= a;
    p.mau_so /= a;
    return p;
}
struct phan_so plus(struct phan_so a, struct phan_so b){
    struct phan_so c;
    c.tu_so=a.tu_so*b.mau_so+b.tu_so*a.mau_so;
    c.mau_so=b.mau_so*a.mau_so;
    return simplify(c);
}
struct phan_so multiply(struct phan_so a, struct phan_so b){
    struct phan_so c;
    c.tu_so=a.tu_so*b.tu_so;
    c.mau_so=a.mau_so*b.mau_so;
    return simplify(c);
}
int main()
{
    int n;
    struct phan_so a, b;
    printf("enter tu so cua phan so thu nhat: ");
    scanf("%i",&a.tu_so);
    printf("enter mau so cua phan so thu nhat: ");
    scanf("%i",&a.mau_so);
    printf("enter tu so cua phan so thu hai: ");
    scanf("%i",&b.tu_so);
    printf("enter mau so cua phan so thu hai: ");
    scanf("%i",&b.mau_so);
    printf("enter 1 for plus\nenter 2 for minus\nenter 3 for multiplication\nenter 4 for devision\nenter here: ");
    scanf("%i",&n);
    struct phan_so c;
    switch(n)
    {
        case 1:
            printf("%i/%i+%i/%i=",a.tu_so,a.mau_so,b.tu_so,b.mau_so);
            c = plus(a, b);
            printf("%i/%i", c.tu_so, c.mau_so);
            break;
        case 2:
            printf("%i/%i-%i/%i=",a.tu_so,a.mau_so,b.tu_so,b.mau_so);
            b.tu_so = -b.tu_so;
            c = plus(a, b);
            printf("%i/%i", c.tu_so, c.mau_so);
            break;
        case 3:
            printf("%i/%i*%i/%i=",a.tu_so,a.mau_so,b.tu_so,b.mau_so);
            c = multiply(a, b);
            printf("%i/%i", c.tu_so, c.mau_so);
            break;
        case 4:
            printf("%i/%i/%i/%i=",a.tu_so,a.mau_so,b.tu_so,b.mau_so);
            int temp = b.tu_so;
            b.tu_so = b.mau_so;
            b.mau_so = temp;
            c = multiply(a, b);
            printf("%i/%i", c.tu_so, c.mau_so);
            break;
        default:
            break;
    }
}
