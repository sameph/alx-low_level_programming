#include "main.h"
/**
 * cap_string(char *str) - function to capitilize a string
 * @str: the string to be capitilized
 * Return: return str
 */
char *cap_string(char *str)
{
	int i, j;
	char c[] = {' ', '\t', '\n', ';', ',', '.', '!', '?', '\"', '(', ')', '{', '}'};
	

       while (str[i] != '\0')
       {	       
	       if (i == 0 && str[i] > 'a' && str[i] < 'z')
	       {
		       str[i] -= str[i];
	       }
	       
	       j = 0;

	       while (c[j] != '\0')
	       {
		       if (str[i] ==  c[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		       {
			       str[i + 1] -= 32;

		       }

		       j++;
	       }

	       i++;
       }

