#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - the string that checks the first
 * Return: the string of the result
 * @haystack: the major string
 * @needle: gthe substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = strstr(haystack, needle);

	return (res);
}
