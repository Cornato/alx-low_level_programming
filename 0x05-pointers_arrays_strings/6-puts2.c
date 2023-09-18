#include "main.h"
/**
 * puts2 - prints every other character.
 * @str: pointer.
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
