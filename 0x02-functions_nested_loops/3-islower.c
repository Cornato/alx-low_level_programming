#include "main.h"

/**
 * _islower - lowercase character
 *  * @c: The loweer to checked
 * Return: 1 if c lowercase else 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
