#include "main.h"

/**
 * print_number - a function that prints an integer.
 */
void print_number(int n)
{
	unsigned int nx;

	if (n < 0)
	{
		nx = -n;
		_putchar('-');
	} else
	{
		nx = n;
	}

	if (nx / 10)
	{
		print_number(nx / 10);
	}

	_putchar(nx % 10);
}
