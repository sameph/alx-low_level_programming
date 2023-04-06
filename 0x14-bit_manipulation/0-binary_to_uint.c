#include <stdio.h>
/**
 * binary_to_uint - a function which convert binary to decimal
 * @b: a binary number to be converted
 *
 * Return: return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);
	int k;
	unsigned int conv = 0;

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		conv = 2 * conv + (b[k] - '0');
	}
	return (conv);
}
