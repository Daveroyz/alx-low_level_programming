#include "main.h"

/**
 * main - Prints _putchar  followed by a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	char *word;

	word = "_putchar\n";
	while (*word)
	{
		_putchar(*word);
		word++;
	}
	return (0);
}
