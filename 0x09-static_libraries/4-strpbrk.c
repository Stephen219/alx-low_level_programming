#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - is used to finf=d the first occurence of a character in a charsst
 * Return: pointer
 * @s: string
 * @accept: the charset
 */

char *_strpbrk(char *s, char *accept)
{
	char *res = strpbrk(s, accept);

	return (res);
}
