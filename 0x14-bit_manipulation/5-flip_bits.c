#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Returnreturn 0 for success and (-1) otherwise
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k, i;

	k = 0;
	for (i = 0; i <= (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
		{
			k++;
		}
		m >>= 1;
		n >>= 1;
	}
	return (k);
}
