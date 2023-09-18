#include "main.h"
/**
 * rev_string - Reverse a value.
 * @s: pointer.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char oldVal;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		oldVal = s[i];
		s[i] = s[j];
		s[j] = oldVal;
	}
}
