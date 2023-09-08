#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - display  "alphabet in lowercase"
 * Return: 0 and exit the program
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);
	
	putchar('\n');
	return (0);
}
