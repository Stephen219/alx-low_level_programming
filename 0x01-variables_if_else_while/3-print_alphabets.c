#include <stdio.h>
/**
 * main - entry to the program
 * Return: 0 (ucces)
 */

int main(void)
{
	char lowercase = 'a';

	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}

