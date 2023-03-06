#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies memory area
 * @dest: address where memory will be copied to
 * @src: address from where memory is copied
 * @n: size of bytes to be copied
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
