#include <stdio.h>

/**
 * main - prints all combinations of a single digit
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
