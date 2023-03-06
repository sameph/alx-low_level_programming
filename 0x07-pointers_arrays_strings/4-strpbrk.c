#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: the main string
 * @accept: the string to be searched
 * Return: pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (s[0] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[0] == accept[j])
			{
				return (s);
			}
			s++;
		}
	}
	return (0);
}
