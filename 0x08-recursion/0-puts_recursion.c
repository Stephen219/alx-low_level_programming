#include <stdio.h>
/**
 * _puts_recursion - this is the function that prints the string
 * @s: the string param
 * Return: void for success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		puts('\n');
	} else
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
	puts('\0');

}
