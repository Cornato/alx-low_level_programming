#include "main.h"
/**
 * puts2 - prints every other character.
 * @str: pointer.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
