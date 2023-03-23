#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: 0 on succes, 1 on argv != 2, 2 on negative bytes in argv
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *addr;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	addr = (char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", addr[i]);

	printf("%02hhx\n", addr[i]);

	return (0);
}
