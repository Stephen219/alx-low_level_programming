#include "main.h"

/**
 * print_alphabet - the function to print the alphabets
 * Return: void here
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
