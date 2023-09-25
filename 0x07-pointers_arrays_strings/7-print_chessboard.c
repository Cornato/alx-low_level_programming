#include "main.h"

/**
 * *print_chessboard - chessboard
 * @a: char pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int Player1, Player2;

	for (Player1 = 0; Player1 < 8; Player1++)
	{
		for (Player2 = 0; Player2 < 8; Player2++)
		{
			_putchar(a[Player1][Player2]);
		}
		_putchar('\n');
	}
}
