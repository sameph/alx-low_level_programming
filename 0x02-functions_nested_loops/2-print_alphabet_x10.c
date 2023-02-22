#include "main.h"

/**
 * print_alphabet_x10 - printing 10 times alphabet in small letter
 * Return: return (0) for success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{

	while (j <= 'z')
	{

	_putchar(j);

	j++;

	}

	_putchar("\n");

	i++;

	}

	return (0);
}
