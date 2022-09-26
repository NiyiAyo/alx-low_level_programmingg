#include "main.h"
/**
 * _memcpy - copies the value of one address into another
 * @dest : destination
 * @src : source
 * @n : unsigned int n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		dest[i] = src[i]
	}
	return (dest);
}
