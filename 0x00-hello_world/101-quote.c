#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints a specific message to the standard error.
 *
 * Return: Always 1 (error code).
 */
int main(void)
{
    /* This is where the program is executed. */
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Using write to print to standard error */
    write(2, str, 59);

    return (1);
}
