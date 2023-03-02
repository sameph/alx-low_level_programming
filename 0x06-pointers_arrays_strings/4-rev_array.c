#include "main.h"
/**
 * main - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i=n-1;
	while(i >= 0)
	{
		_putchar("%d", a[i]);

		if(i != 0)
		{
			_putchar(", ");
		}
		i--;
	}
	_putchar("\n");
}
                
