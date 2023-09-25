#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - function that returns the chase the board
 * Return: void
 * @a: the rows
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}

}
