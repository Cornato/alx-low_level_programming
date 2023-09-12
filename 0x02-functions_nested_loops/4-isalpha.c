#include "main.h"

/**
 * _isalpha - lowercase character
 *  * @l: The loweer to checked
 *  * @u: The uppercase to checked
 *
 * Return: 1 if c lowercase else 0 otherwise
 */
int _isalpha(int l, int u)
{
	if ((l >= 'a' && l <= 'z') || (u >= 'A' && u <= 'Z'))
		return (1);
	else
		return (0);
}
