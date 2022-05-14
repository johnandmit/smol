#include <stdio.h>
#include <string.h>
char final_str[100];
const char* remove_chars(char str[], int index, int n)
{
	int final_index = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (i < index || i > index + n - 1)
		{
			final_str[final_index] = str[i];
			final_index++;
		}
	}
	final_str[final_index] = '\0';
	return final_str;
}

const char* remove_chars2(char str[], int index, int n)
{
	char temp1[100], temp2[100];
	int temp_index = 0;
	for (int i = 0; i < index; i++)
	{
		temp1[temp_index] = str[i];
		temp_index++;
	}
	for (int i = index + n - 1; i < strlen(str); i++)
	{
		temp1[temp_index] = str[i];
		temp_index++;
	}
	strcat(final_str, temp1);
	strcat(final_str, temp2);
	final_str[temp_index] = '\0';
	return final_str;
}

int main()
{
	char str[100], final_str[100];
	int index, n;
	printf("enter string: ");
	gets(str);
	printf("enter index: ");
	scanf("%i", &index);
	printf("enter n: ");
	scanf("%i", &n);

	strcpy(final_str, remove_chars2(str, index, n));
	printf("%s", final_str);
}
