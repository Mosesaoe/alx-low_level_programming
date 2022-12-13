#include "main.h"
/**
* print _alphabet - Entry point
* return: Always(0)
*
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
