#include <stdio.h>
#include <string.h>
struct Hoso{
    char HoTen[40];
    float Diem;
    char Loai[10];
};
int main(){
    struct Hoso a[30];
    int n,i;
    printf("enter n: ");
    scanf("%i",&n);
    for(i=0;i<n;i++){
    printf("enter Ho ten: ");
    scanf("%s",&a[i].HoTen);
    printf("enter diem: ");
    scanf("%f",&a[i].Diem);
    if(9<=a[i].Diem&&10<=a[i].Diem)
        {
            strcpy(a[i].Loai, "Gioi");
        }
    else if(7<=a[i].Diem&&a[i].Diem<9)
        {
            strcpy(a[i].Loai, "Kha");
        }
    else if(5<=a[i].Diem&&a[i].Diem<7)
        {
            strcpy(a[i].Loai, "Trung binh");
        }
    else if(a[i].Diem<5)
        {
            strcpy(a[i].Loai, "Khong Dat");
        }
    }
    for(int j=0;j<i;j++){
        printf("%s la loai %s\n",a[j].HoTen,a[j].Loai);
    }
}
