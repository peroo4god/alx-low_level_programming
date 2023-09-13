#include "main.h"

/**
 * _isalpha - checks for alphabetic charactor
 * @c: the character to be checked for
 * Return: 1 if c is a letter, otherwise print 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
