#include "main.h"
/**
 *_memset - file a block of memory with a specific value
 *@s: starting address of memory to filled
 *@b: the desired value
 *@n: number of bytes to be change
 *
 *Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
