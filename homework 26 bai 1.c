#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    char ch;
    int num = 0, chara = 0;
    fp = fopen("C:\\Users\\minhp\\Downloads\\data.txt", "r");
    if (fp != NULL)
    {
        do
        {
            ch = fgetc(fp);
            if (ch != EOF)
            {
                if (isdigit(ch))
                    num++;
                else if (isalpha(ch))
                    chara++;
                printf("%c", ch);
            }
        } while (ch != EOF);
        fclose(fp);
    }
    else
    {
        puts("cannot open file");
    }
    printf("\nnumber of characters = %i\nnumber of numbers = %i", chara, num);
    return 0;
}
