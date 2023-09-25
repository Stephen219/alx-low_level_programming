
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - the main function of program
 * Return: dest pointer
 * @dest: destination
 * @src: source
 * @n: the size of the memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);

}
