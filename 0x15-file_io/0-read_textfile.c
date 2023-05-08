#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the output.
 * @filename: a pointer
 * @letters: the number of letters it should read and print
 *
 * Return: if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ops, reed, wryte;
	char *file;

	file = malloc(sizeof(char) * letters);

	if (file == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	ops = open(filename, O_RDONLY);

	reed = read(ops, file, letters);

	wryte = write(STDOUT_FILENO, file, reed);

	if (ops == -1 || reed == -1 || wryte == -1)
	{
		free(file);
		return (0);
	}

	free(file);
	close(ops);

	return (wryte);

}
