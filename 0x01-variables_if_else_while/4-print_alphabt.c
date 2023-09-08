#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	/* Loop through the alphabet */
	while (letter <= 'z')
	{
	/* Check if the letter is not 'e' or 'q' */
	if (letter != 'e' && letter != 'q')
	{
		/* Print the current letter */
		putchar(letter);
	}
	/* Move to the next letter */
	letter++;
	}

	/* Print a newline character to end the output */
	putchar('\n');
	return (0);
}

