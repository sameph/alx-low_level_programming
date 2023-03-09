#include "main.h"
/**
 * is_prime_number - a function to determine if the number is prime
 * @n: a number to be determined
 * Return: return integer
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - check wether a number is prime
 * @n: a number to be checked
 * @i: tester of prime
 * Return: return 0 or 1
 */
void prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
