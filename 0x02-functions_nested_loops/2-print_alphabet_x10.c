#include "main.h"

/**
 * print_alphabet_x10 - pa function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */
 
void print_alphabet_x10(void)
{
	char al;
	int i;

	i = 0;

	while (i < 10)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(c);
			al++;
		}
		_putchar('\n');
		i++;
	}
}
