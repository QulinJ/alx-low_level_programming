#include "main.h"

/**
 * swap_int - swap value
 * @a: the integer
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int cat;

	cat = *a;
	*a = *b;
	*b = cat;
}
