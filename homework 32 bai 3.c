#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
struct wordCount
{
	char *word;
	uint32_t counts;
};
struct Array
{
	void *data;
	size_t size;
};
struct charCount
{
	char character;
	uint32_t counts;
};
struct Array wordCounter(FILE *fp)
{
	struct wordCount words[512];
	char crntWord[512];
	uint16_t crntAddWord = 0;
	while (fscanf(fp, "%s ", crntWord) == 1)
	{
		size_t i = 0;

		for (; i < crntAddWord; i++)
		{
			if (strcmp(words[i].word, crntWord) == 0)
			{
				words[i].counts++;
				break;
			}
		}
		if (i >= crntAddWord)
		{
			words[crntAddWord].counts = 1;
			strcpy(words[crntAddWord++].word = malloc(sizeof(char) * (strlen(crntWord) + 1)), crntWord);
		}
	}
	struct Array returnArray = {.data = words, .size = crntAddWord * sizeof(struct wordCount)};
	return returnArray;
}
struct Array charCounter(FILE *fp)
{
	struct charCount chars[512];
	uint16_t crntAddChar = 0;

	char crntChar;
	while (!feof(fp))
	{
		crntChar = fgetc(fp);
		size_t i = 0;
		for (; i < crntAddChar; i++)
		{
			if (chars[i].character == crntChar)
			{
				chars[i].counts++;
				break;
			}
		}
		if (i >= crntAddChar)
		{
			chars[crntAddChar].counts = 1;
			chars[crntAddChar++].character = crntChar;
		}
	}
	struct Array returnArray = {.data = chars, .size = crntAddChar * sizeof(struct charCount)};
	return returnArray;
}

int main()
{
	FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\__textez.txt", "r");
	if (fp == NULL)
	{
		printf("Failed: ");
		return 1;
	}
	{
		struct Array a = wordCounter(fp);
		int size = a.size / sizeof(struct wordCounter);
		for (size_t i = 0; i < size; i++)
		{
			struct wordCounter *wc = a.data + i * sizeof(struct wordCounter);
			printf("%c : %i\n", wc->character, wc->counts);
		}
	}
	{
		struct Array a = charCounter(fp);
		int size = a.size / sizeof(struct charCount);
		for (size_t i = 0; i < size; i++)
		{
			struct charCount *wc = a.data + i * sizeof(struct charCount);
			printf("%c : %i\n", wc->character, wc->counts);
		}
	}
	fclose(fp);
}
