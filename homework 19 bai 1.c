#include <stdio.h>
#include <string.h>
struct sinh_vien
{
    char msv[10];
    char hoTen[50];
    int lop;
    int dtb;
};
int main()
{
    int n;
    printf("enter n: ");
    scanf("%i",&n);
    struct sinh_vien a[n];
    for(int i=0;i<n;i++){
        printf("enter ma so sinh vien: ");
        scanf("%s",&a[i].msv);
        // check dup
        char duped = 0;
        for(int j=0;j<i;j++){
            if(!strcmp(a[i].msv, a[j].msv)){
                printf("learn more\n");
                i--;
                duped =1;
                break;
            }
        }
        if(duped) continue;
        
        printf("enter Ho Ten: ");
        scanf("%s",&a[i].hoTen);
        printf("enter lop: ");
        scanf("%i",&a[i].lop);
        printf("enter diem so trung binh: ");
        scanf("%i",&a[i].dtb);
    }
    printf("\n\n");
    char wantedID[10];
    printf("enter ID: "); scanf("%s", wantedID);
    for(int i=0;i<n;i++){
        if(!strcmp(a[i].msv, wantedID))
            printf("hoc sinh %s hoc lop %i va diem trung binh la %i\n",a[i].hoTen,a[i].lop,a[i].dtb);
    }
    for(int i=0;i<n;i++){
        if(a[i].dtb>5)
            printf("hoc sinh %s\n",a[i].hoTen);
    }
}
