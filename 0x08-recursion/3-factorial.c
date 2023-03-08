#include "main.h"
/**
 * factorial - a function which prints factorial of given number
 * @n: anumber whose factorial will be printed
 * Return: return integer
 */
int factorial(int n)
{
        if (n < 0)
                return (-1);
        else if (n == 0)
                return (1);
        return (n * factorial(n - 1));
}
