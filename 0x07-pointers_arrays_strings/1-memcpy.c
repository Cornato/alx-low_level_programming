#include "main.h"

/**
 * *_memcpy - concatenates two strings
 * @dest: buffer pointer
 * @src: size pointer
 * @n: count pointer
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *Value = memcpy(dest, src, n);

	return (Value);
}
