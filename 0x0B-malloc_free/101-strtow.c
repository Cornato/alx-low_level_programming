#include "main.h"

void myChars(char **, char *, int, int, int);

/**
 * splitWords - Splits strings.
 * @wordArray: store the split words.
 * @inputString: split.
 * Return: None.
 */
void splitWords(char **wordArray, char *inputString)
{
	int i, j, wordStart, isWord;

	i = j = isWord = 0;

	while (inputString[i])
	{
		if (isWord == 0 && inputString[i] != ' ')
		{
			wordStart = i;
			isWord = 1;
		}

		if (i > 0 && inputString[i] == ' ' && inputString[i - 1] != ' ')
		{
			myChars(wordArray, inputString, wordStart, i, j);
			j++;
			isWord = 0;
		}

		i++;
	}

	if (isWord == 1)
	{
		myChars(wordArray, inputString, wordStart, i, j);
	}
}
/**
 * myChars - creates string.
 * @words: insert to string.
 * @str: work on it.
 * @start: position.
 * @end: stop position.
 * @index: start inserting.
 * Return: 0.
 */
void myChars(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}

	words[index][j] = '\0';
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to the array of split words.
 */
char **strtow(char *str)
{
	int i, isStart, Count, Length;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}

	i = isStart = Count = Length = 0;

	while (str[i])
	{
		if (isStart == 0 && str[i] != ' ')
			isStart = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			isStart = 0;
			Count++;
		}
		i++;
	}

	Count += isStart == 1 ? 1 : 0;

	if (Count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (Count + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	splitWords(words, str);
	words[Count] = NULL;
	return (words);
}
