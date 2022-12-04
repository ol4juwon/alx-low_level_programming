#include "main.h"

/**
 * print_binary - function to inary
 * @n: unsigned long int
 *
 * description: uui
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
if (n == 0)
{
putchar('0');
return;
}
converter(n);
}

/**
 * converter - function converter
 * @o: unsigned long int
 * description: convert
 * Return: void.
 */

void converter(unsigned long int o)
{
if (o < 1)
return;

converter(o >> 1);

if (o & 1)
	putchar('1');
else
	putchar('0');
}
