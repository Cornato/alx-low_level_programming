#include "main.h"

/**
 * _islower - lowercase character
 *  * @c: The loweer to checked
 * Return: 1 if c lowercase else 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}