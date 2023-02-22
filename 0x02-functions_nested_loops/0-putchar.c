#include "_putchar.h"
/**
 * main - A c program to print _putchar
 * Description: this program prints _putchar followed by new line
 * Return: return 0 for success
 */
int main(void)
{
char p[] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar (p[i]);
i++;
}
return (0);
}
