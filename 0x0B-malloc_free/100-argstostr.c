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
	int length, i, main_pos, x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			length += strlen(av[i]) + 1;
		}
	}

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		if (av[x] != NULL)
		{
			strncpy(ptr + main_pos, av[x], strlen(av[x]));
			main_pos += strlen(av[x]);
			ptr[main_pos] = '\n';
			main_pos++;
		}
	}

	ptr[main_pos] = '\0';

	return (ptr);
}
