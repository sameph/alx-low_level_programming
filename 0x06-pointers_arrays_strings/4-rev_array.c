#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int n = n;
	int tmp;

	while (i < n)
	{
		tmp = a[i];

		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}

}
