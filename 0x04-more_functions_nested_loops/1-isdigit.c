#include "main.h"

/**
 * _isdigit - is  a function that checks for a digit 0-9
 * @c: character to be checked
 * Return: 1 if the character is a digit, otherwise 0
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
