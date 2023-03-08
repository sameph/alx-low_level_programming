#include "main.h"
/**
 * _print_rev_recursion - printing string in recursion
 * @s: string to be recursed
 * Return: return nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}

}
