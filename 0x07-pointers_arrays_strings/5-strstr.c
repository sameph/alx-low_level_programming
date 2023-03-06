#include "main.h"
#include <string.h>
/**
 * _strstr - a function that finds a string match
 * @haystack: a pointer to the main string
 * @needle: a string to be matched
 * Return: return a pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	needle = strstr(haystack, needle);
	return (needle);
}
