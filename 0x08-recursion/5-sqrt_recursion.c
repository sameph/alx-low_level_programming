#include "main.h"
/**
 * _sqrt_recursion - square root in recursion
 * @n: number to be computed
 * Return: Return integer
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));

}
/**
 * sqrt - a function to compute square root
 * @n: number to be computed
 * @i: tester
 * Return: return square root of integer
 */
int sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
