#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
*/
void print_chessboard(char (*a)[8])
{
	int m, o;

	for (m = 0; m < 8; m++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[m][o]);
		}
		_putchar('\n');
	}
}
