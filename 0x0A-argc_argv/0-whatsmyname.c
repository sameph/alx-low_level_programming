#include <stdio.h>
/**
 * main - a program which prints name of the file
 * @argc: argument count
 * @argv: argument vector
 * Return: return name of the file
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);

}
