#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
