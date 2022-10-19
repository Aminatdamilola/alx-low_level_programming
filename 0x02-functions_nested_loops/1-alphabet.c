#include "main.h"

/**
 * print_alphabet - print the alphabet by new line
 *
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
