#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - the function to perfom the task
 * Return: number of the bytes
 * @s: the string
 * @accept: the character
 */
unsigned int _strspn(char *s, char *accept)
{
	int res = strspn(s, accept);

	return (res);
}
