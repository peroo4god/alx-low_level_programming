#include "main.h"

/**
 * print_line - straight line
 * @n: number of times required
 * Return 0 success
 */

void print_line(int n)
{

	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
