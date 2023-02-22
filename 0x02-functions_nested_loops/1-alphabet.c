#include "main.h"

/**
 * print_alphabet - Print all alphbet in lowwercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
