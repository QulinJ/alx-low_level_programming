#include "main.h"

/**
 * *_memcpy - Copies memory area from src to dest.
 * @dest: Destination
 * @src: Source
 * @n: Max bytes to use
 *
 * Return: dest
 */

char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
