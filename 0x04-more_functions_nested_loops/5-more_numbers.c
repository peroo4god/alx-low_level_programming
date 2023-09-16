#include "main.h"

/**
 * more_numbers -  function that prints numbers from 0 to 14, 10 times
 *
 * Return: 0-14 success followed by a new line
 */

void more_numbers(void)
{

int x, y;
	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar('1');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
