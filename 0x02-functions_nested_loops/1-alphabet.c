#include "main.h"

/**
 * main - a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char al;

	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}
