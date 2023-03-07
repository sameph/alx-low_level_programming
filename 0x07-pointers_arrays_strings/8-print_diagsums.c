#includec "main.h"
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: the 2D array
 * @size: size of the array
 * Return: return nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, Asum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
			if (i + j == (size - 1))
			{
				Asum += a[i][j];
			}
		}
	}
	printf("%d , %d", sum, Asum);
}
