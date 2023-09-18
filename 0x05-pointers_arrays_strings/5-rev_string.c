#include "main.h"
#include <string.h>

/**
 * rev_string - to rev_string value
 * @s: pointer
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
