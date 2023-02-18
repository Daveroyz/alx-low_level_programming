#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * 	You can only use the putchar function
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
