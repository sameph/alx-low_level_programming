#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function to print name
 * @name: name to be printed
 * @f: a function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (f != NULL)
		f(name);
}
