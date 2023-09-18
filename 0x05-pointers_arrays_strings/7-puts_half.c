#include "main.h"
/**
 * puts_half - puts_half.
 * @str: pointer.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
