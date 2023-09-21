#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - this is the function concatinates the string.   
 * the differnce between strcat and this is that strncat 
 * specifies the number of characters to be copied
 * Return: the pointer of the string incase of a succes
 * @dest:  the destination string
 * @source: the source string.
 * @n:  the number of characters to be copied.
 */
char *_strncat(char *dest, char *src, int n)
{
	int *ptr;

	strncat(dest, src, n);
	ptr = &dest;
	return (ptr);
}
