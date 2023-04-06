#include "main.h"
#include <stdlib.h>
/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index
 * @n: a pointer to a number
 * @index: index
 *
 * Return: return 0(success), (-1) othewise
 */
 
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
