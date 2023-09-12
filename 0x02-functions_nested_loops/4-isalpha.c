#include "main.h"

/**
 * _isalpha - lowercase character
 *  * @l: The loweer to checked
 *  * @u: The uppercase to checked
 *
 * Return: 1 if c lowercase else 0 otherwise
 */
int _isalpha(int l)
{
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (1);
	else
		return (0);
}
