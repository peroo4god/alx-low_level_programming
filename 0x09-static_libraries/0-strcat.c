#include "main.h"

/**


 *  _strcat - A function that concatenates two strings


 *  @dest: the input value


 *  @src: the input value

 *

 *  Return: 0 (void)

 */


char *_strcat(char *dest, char *src)


{


        	int a;


        	int b;



        	a = 0;


        	while (dest[a] != '\0')


        	{


                    	a++;


        	}


        	b = 0;


        	while (src[b] != '\0')


        	{


                    	dest[a] = src[b];


                    	a++;


                    	b++;


        	}



        	dest[a] = '\0';

        	return (dest);

}
