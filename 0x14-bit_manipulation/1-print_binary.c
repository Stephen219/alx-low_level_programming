#include "main.h"


/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 * unsigned long integer without using arrays, malloc, %, / operators.
 */




void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}
