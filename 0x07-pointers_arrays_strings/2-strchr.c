#include "main.h"
/**
 * *_strchr - a function to search for a character in the string
 * @s: string to be searched in
 * @c: character to be searched
 * Return: return pointer to the occurance of character c , unless null
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++
	}
	return (null);
}
