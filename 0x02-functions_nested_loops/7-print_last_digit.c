#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number to be printed
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int sb = n % 10;

	if (sb < 0)
		sb *= -1;

	_putchar(sb + '0');

	return (0);
}
