#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int score = 0, i = 0, n;
    char name[50],s[80];
    fp = fopen ("diem_thi.txt", "w");
    printf("enter number of students: ");
    scanf("%i", &n);
    while (i < n)
    {
        printf("enter name: ");
        scanf("%s", name);
        printf("enter score: ");
        scanf("%i", &score);
        i++;
        fprintf(fp, "hoc sinh: %s co %d diem \n", name, score);
    }
    fclose(fp);
    fp = fopen("diem_thi.txt", "r");
    for(int e=0;e<n;e++)
    {
        fgets(s,80,fp);
        printf("%s",s);
    }
    fclose(fp);
    return 0;
}
