#include "main.h"
/**
 * argstostr - pointer
 * @ac: First Args
 * @av: Sec Args
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int current_position = 0;
	int total_length = 0;
	int i;
	int x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}

	ptr = malloc((total_length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		if (av[x] != NULL)
		{
			strncpy(ptr + current_position, av[x], strlen(av[x]));
			current_position += _strlen(av[x]);
			ptr[current_position] = '\n';
			current_position++;
		}
	}

	ptr[current_position] = '\0';

	return (ptr);
}
