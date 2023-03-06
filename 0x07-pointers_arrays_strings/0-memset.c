#include <string.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: is a string that points to n
 * @b: a constant byte
 * @n: the first bytes of memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem = memset(s, b, n);

	return (mem);
}
