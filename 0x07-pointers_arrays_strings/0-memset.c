#include <stdio.h>
#include "main.h"
/**
 * _memset - the main function that fills the memories
 * Return: the pointer of the string
 * @s: the string
 * @b: the character of the string to be filled
 * @n: the size
 */



char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
