#include "main.h"

/**
 * main - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (ch <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
