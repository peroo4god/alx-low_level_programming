#include "main.h"

/**
 * _islower - check if char is in lower case
 * @c: is the char to check
 * Return: 1 if char is lower case, else 0
 */

int _islower(int c)
{
	if (c >= "a" && c <= "z")
		return (1);
	else
		return (0);
}
