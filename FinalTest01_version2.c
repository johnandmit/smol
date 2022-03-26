#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct pet
{
    char name[50];
    int age;
    char gender[4];
};
void store(struct pet id[21], char path[500], int n)
{
    FILE *fp = fopen(path, "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s,%i,%s\n", id[i].name, id[i].age, id[i].gender);
    }
    fclose(fp);
}
void sort(struct pet id[21], int n)
{
    while (n >= 0)
    {
        int biggest = 0;
        for (int i = 1; i <= n; i++)
        {
            if (strcmp(id[biggest].name, id[i].name) < 0)
            {
                biggest = i;
            }
        }
        struct pet temp = id[biggest];
        id[biggest] = id[n];
        id[n] = temp;
        n--;
    }
}
void search(int n, struct pet id[21], int age, char gender[4])
{
    for (int i = 0; i < n; i++)
    {
        if (id[i].age > age && strcmp(id[i].gender, gender) == 0)
        {
            printf("%s,%i,%s\n", id[i].name, id[i].age, id[i].gender);
        }
    }
}
int main()
{
    int n;
    do
    {
        printf("enter n:");
        scanf("%i", &n);
    } while (n <= 0 || n > 20);

    struct pet id[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nenter name of pet %i: ", i);
        scanf("%s", id[i].name);
        for (int e = 0; e < strlen(id[i].name); e++)
        {
            id[i].name[e] = tolower(id[i].name[e]);
        }
        printf("enter age of pet %i: ", i);
        scanf("%i", &id[i].age);
        printf("enter gender of pet %i(Cai,Duc): ", i);
        scanf("%s", id[i].gender);
    }
    store(id, "C:\\Users\\minhp\\source\\repos\\Stuff\\finaltest_input.txt", n);
    sort(id, n - 1);
    store(id, "C:\\Users\\minhp\\source\\repos\\Stuff\\finaltest_output.txt", n);
    search(n, id, 5, "Cai");
}
