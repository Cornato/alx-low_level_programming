#include "main.h"
/**
 * puts_half - puts_half.
 * @str: pointer.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = (len / 2) - 1; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
