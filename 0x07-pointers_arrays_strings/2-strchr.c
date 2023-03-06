#include "main.h"
/**
 * *_strchr - a function to search for a character in the string
 * @s: string to be searched in
 * @c: character to be searched
 * Return: return pointer to the occurance of character c , unless null
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (s);
		}
		else
			s++
	}
	return (null);
}
