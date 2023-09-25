#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function used to search for the occurence
 * Return: pointer of the first occurence of the char
 * @s: string
 * @c: character to bre searched
 */

char *_strchr(char *s, char c)
{
	char *res = strchr(s, c);

	return (res);

}
