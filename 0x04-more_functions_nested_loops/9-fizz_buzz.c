#include <stdio.h>

/**
 * main - Prints the numbers from 1-100 but multiples of 3,
 * Fizz is printed in place of the number Buzz in place,
 * of multiples of 5 and FIzzBuzz for both 5 and 3.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n % 5) == 0)
	{
	printf("FizzBuzz");
	}
	else if ((n % 3) == 0)
	{
	printf("Fizz");
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", n);
	}
	if (n == 100)
	{
	continue;
	}
	printf(" ");
	}

	printf("\n");
	return (0);
}
