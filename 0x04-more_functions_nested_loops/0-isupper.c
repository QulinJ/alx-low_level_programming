#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: The character to be checked
 *
 * Return: 1 if character is uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
