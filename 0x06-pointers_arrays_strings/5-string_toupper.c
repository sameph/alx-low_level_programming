#include "main.h"
/**
 * *string_toupper(char *) - convert to upper
 * @str: string to be converted
 * Return: nothing
 */
*string_toupper(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
	
		 str[i] = str[i] - 32;
		 i++;
	}
}

