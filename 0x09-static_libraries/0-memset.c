
#include "main.h"

/**

 * _memset - fills a block of memory with a given value

 * @s: The starting address of memory to be filled

 * @b: the expected value

 * @n: The number of bytes to be changed

 *

 * Return: change the  given array with new value for n bytes

 */

char *_memset(char *s, char b, unsigned int n)

{
   	int a = 0;

   	for (; n > 0; a++)

   	{
          	s[a] = b;

          	n--;

   	}

   	return (s);

}
