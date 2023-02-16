#include<stdio.h>
/**
 * main - this is a c program to display size of items
 * Return: this should return with 0 error
 */
int main(void)
{
 char a;
 int b;
long int c;
long long int d;
float f;

printf("Size of a char: $lu Byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: $lu Byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: $lu Byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: $lu Byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: $lu Byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
