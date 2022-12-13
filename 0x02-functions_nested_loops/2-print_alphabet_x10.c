#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char ya;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ya = 'a'; ya <= 'z'; ya++)
			_putchar(ya);
		_putchar('\n')
	}
}
