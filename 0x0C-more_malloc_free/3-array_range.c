#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to print array
 * @min: minimum
 * @max: maximum
 * Return: return pointer to an array
 */
int *array_range(int min, int max)
{
	int n = (max - min);
	int *arr;

	if (min > 10)
		return (NULL);
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	int i;

	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
