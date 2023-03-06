#include "main.h"
/**
 * print_chessboard - a function to print chessboard
 * @a: two dimensional array to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchari('\n');
	}
}
