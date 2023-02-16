#include <stdio.h>

/**
 * main - Print size of bytes for various systems
 *
 *
 * Return: 0 upon successful exit
 */
int main(void)
{
	char ch;
	int in;
	long int lin;
	long long int lonli;
	float flo;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lin));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lonli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flo));

	return (0);
}
