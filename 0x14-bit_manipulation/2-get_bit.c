#include "main.h"


/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number
 * @index: The index of the bit to retrieve (0-based)
 * Return: Value of the bit at index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	mask = 1UL << index;



	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}




	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
