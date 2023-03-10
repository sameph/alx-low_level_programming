#include "main.h"
/**
 * _sqrt_recursion - square root in recursion
 * @n: number to be computed
 * Return: Return integer
 */
int _sqrt_recursion(int n)
{
	int i;

	i = sqroot(n, 1);
	return (i);
}
/**
 * sqroot - a function to compute square root
 * @n: number to be computed
 * @i: tester
 * Return: return square root of integer
 */
int sqroot(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqroot(n, i + 1));
}
