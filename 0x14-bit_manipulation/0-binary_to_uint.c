#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j;

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}
	return (result);

	if (!b)
		return (0);
}
