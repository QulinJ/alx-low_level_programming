#include <stdio.h>

/**
 * main - prints alpha in lower and uppercase
 * Return: Always 0(Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; 1 < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
