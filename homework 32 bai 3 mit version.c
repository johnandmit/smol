#include <stdio.h>
#include <string.h>
struct wordCounter
{
	int frequency;
	char word[50];
};
struct charCounter
{
	int frequency;
	char character;
};
void Word(FILE *fp)
{
	struct wordCounter Words[1000];
	char Temp[100];
	int i = 0, HighestIndex = 0, NumOfWords = 0;
	while (fscanf(fp, "%s ", Temp) == 1)
	{
		NumOfWords++;
		int yes = 1;
		for (int j = 0; j < HighestIndex; j++)
		{
			if (strcmp(Words[j].word, Temp) == 0)
			{
				Words[j].frequency++;
				yes = 0;
			}
		}
		if (yes == 1)
		{
			strcpy(Words[HighestIndex].word, Temp);
			Words[HighestIndex].frequency = 1;
			HighestIndex++;
		}
	}
	for (int j = 0; j < HighestIndex; j++)
	{
		printf("%s %i/%i\n", Words[j].word, Words[j].frequency, NumOfWords);
	}
}
void character(FILE *fp2)
{
	struct charCounter characters[1000];
	char Temp1;
	int i = 0, HighestIndex = 0, numberOfCharacters = 0;
	i = 0;
	HighestIndex = 0;
	while (!feof(fp2))
	{
		Temp1 = fgetc(fp2);
		int yes = 1;
		numberOfCharacters++;
		for (int j = 0; j < HighestIndex; j++)
		{
			if (characters[j].character == Temp1)
			{
				characters[j].frequency++;
				yes = 0;
			}
		}
		if (yes == 1)
		{
			characters[HighestIndex].frequency = 1;
			characters[HighestIndex].character = Temp1;
			HighestIndex++;
		}
	}
	printf("%i", HighestIndex);
	for (int j = 0; j < HighestIndex; j++)
	{
		printf("\t\'%c\' %i/%i", characters[j].character, characters[j].frequency, numberOfCharacters);
	}
}
int main()
{
	FILE *fp, *fp2;
	fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\__textez.txt", "r");
	Word(fp);
	fclose(fp);
	printf("\n");
	fp2 = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\__textez.txt", "r");
	character(fp2);
	fclose(fp2);
}
