#include <stdio.h>
#include <string.h>
struct pet
{
    char name[50];
    int age;
    char gender[3];
};
void store(char name[50], int age, char gender[3])
{
    FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\finaltest_input.txt", "a");
    fprintf(fp, "%s,%i,%s\n", name, age, gender);
    fclose(fp);
}
int main()
{
    int n = -1;
    while (n <= 0 || n > 20)
    {
        printf("enter n:");
        scanf("%i", &n);
    }
    struct pet id[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nenter name of pet %i: ", i);
        scanf("%s", id[i].name);
        printf("enter age of pet %i: ", i);
        scanf("%i", &id[i].age);
        printf("enter gender of pet %i(Cai,Duc): ", i);
        scanf("%s", id[i].gender);
    }
    for (int i = 0; i < n; i++)
    {
        store(id[i].name, id[i].age, id[i].gender);
    }
    int e = n - 1;
    while (e >= 0)
    {
        int biggest = 0;
        for (int i = 1; i <= e; i++)
        {
            if (strcmp(id[biggest].name, id[i].name) < 0)
            {
                biggest = i;
            }
        }
        struct pet temp = id[biggest];
        id[biggest] = id[e];
        id[e] = temp;
        e--;
    }
    FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\finaltest_output.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s,%i,%s\n", id[i].name, id[i].age, id[i].gender);
    }
    fclose(fp);
    fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\finaltest_output.txt", "r");
    for (int i = 0; i < n; i++)
    {
        if (id[i].age > 5 && strcmp(id[i].gender, "Cai") == 0)
        {
            printf("%s,%i,%s\n", id[i].name, id[i].age, id[i].gender);
        }
    }
}
