#include "main.h"
#include <unistd.h>
/**
 *  _putchar - used to write the character c to stdout
 *  @c: Help to print
 *
 *  Return: 1 when successful
 *  on error, return -1, and set error number corerectly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
