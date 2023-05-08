#include "main.h"
#include <stddef.h>

/**
* create_file - a function that creates a file
* @filename: the name pointer
* @text_content: content
* Return: 1 on success or -1 if error
*/

int create_file(const char *filename, char *text_content)
{
	int ops;
	int wryte;
	int count = 0;

	if (!filename)
		return (-1);
	ops = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (ops == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[count])
		count++;
	wryte = write(ops, text_content, count);
	if (wryte == -1)
		return (-1);
	close(ops);
	return (1);
}
