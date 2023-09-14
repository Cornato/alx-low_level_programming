#include "main.h"

/**
 * _isupper - UpperCase character
 *  * @c: The Upercase true
 * Return: 1 if c Upercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
