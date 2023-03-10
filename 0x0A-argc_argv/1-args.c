#include <stdio.h>
/**
 * main - a program to print number of arguments passed to it
 * @argc: argument counter
 * @argv: argument vector
 * Return: return number of argument
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc && argv )
	{
		printf("%d\n", argc);
	}
	return (0);
}
