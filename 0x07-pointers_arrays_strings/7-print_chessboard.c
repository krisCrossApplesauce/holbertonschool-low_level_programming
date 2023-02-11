#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard(in 6-main.c)
 *
 * @a: array containing chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}

		_putchar('\n');
	}
}
